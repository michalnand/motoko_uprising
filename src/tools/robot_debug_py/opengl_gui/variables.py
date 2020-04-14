
class Variables:
    def __init__(self):
        self.v = {}

    def add(self, name, value):
        self.v[name] = value

    def get(self, name):
        return self.v[name]