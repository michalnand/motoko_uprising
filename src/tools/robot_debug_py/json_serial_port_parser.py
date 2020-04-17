import serial
import json


class JsonSerialPortParser:
    def __init__(self, port, baudrate=115200):
        self.serial = serial.Serial(port, baudrate, timeout=0)

        self.state      = 0
        self.result_str = ""
        self.udpated_flag    = False

        self.pattern_idx = 0

        self.start_pattern = "#JSON\n"
        self.end_pattern   = "#END\n"


    def process(self):
        s = str(self.serial.read(4096).decode("ascii", errors="ignore"))

        for i in range(len(s)):
            self._add(s[i])

    def _add(self, c):
        if self.state == 0:
            if self._check_pattern(c, self.start_pattern):
                self.state = 1
                self.result_str = ""
        else:
            self.result_str+= c 
            if self._check_pattern(c, self.end_pattern):
                self.result_str = self.result_str[:-len(self.end_pattern)]
                self.state = 0
                self.result_json = json.loads(self.result_str)
                self.udpated_flag     = True
                self.result_str = ""
        


    def _check_pattern(self, c, pattern):
        if self.pattern_idx < len(pattern):
            if c == pattern[self.pattern_idx]:
                self.pattern_idx+=1
            else:
                self.pattern_idx = 0


        if self.pattern_idx >= len(pattern):
            self.pattern_idx = 0
            return True

        return False

    def udpated(self):
        return self.udpated_flag

    def get(self):
        self.udpated_flag = False
        return self.result_json