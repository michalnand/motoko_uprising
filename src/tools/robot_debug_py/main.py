import json
import opengl_gui
import robot_debug

with open("./resources/result.json") as json_file:
    json_data = json.load(json_file)


gui = opengl_gui.GLGui("./resources/gui.json")
debug = robot_debug.RobotDebug()


while gui.main_step() != True:
    debug.update(gui, json_data)