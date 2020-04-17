import json
import opengl_gui
import robot_debug
import json_serial_port_parser

serial_port_name = "/dev/tty.usbserial-AM01VGIA"
serial_port = json_serial_port_parser.JsonSerialPortParser(serial_port_name)

'''
while True:
    serial_port.process()
    if serial_port.udpated():
        json_data = serial_port.get()
        print(json_data)
'''

'''
with open("./resources/result.json") as json_file:
    json_data = json.load(json_file)
'''

gui = opengl_gui.GLGui("./resources/gui.json")
debug = robot_debug.RobotDebug()


while gui.main_step() != True:
    serial_port.process()
    if serial_port.udpated():
        json_data = serial_port.get()
        print("new data")
        print(json_data)
        debug.update(gui, json_data)
