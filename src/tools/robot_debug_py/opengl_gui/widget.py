


class Widget:
    def __init__(self, visualisation, variables, textures, params):
        self.visualisation = visualisation
        self.variables     = variables
        self.textures      = textures
        self.params        = params


        self.m_type = str(self.params["type"])

        k = 0.5
        self.x = float(self.params["position"][0])*k
        self.y = float(self.params["position"][1])*k
        self.z = float(self.params["position"][2])*k

        self.r = float(self.params["color"][0])
        self.g = float(self.params["color"][1])
        self.b = float(self.params["color"][2])

        self.font_size = float(self.params["font_size"])


        if "variable" in self.params:
            self.variable_name  = str(self.params["variable"]["name"])
            self.variable_value = self.params["variable"]["value"]
            self.variables.add(self.variable_name, self.variable_value)
        else:
            self.variable_name  = None
            self.variable_value = None

        self.visible_on()

        print("creating widget ", str(self.params["type"]))

        self.child_widgets = []

        from opengl_gui.widget_frame import WidgetFrame
        from opengl_gui.widget_bar_graph import WidgetBarGraph
        from opengl_gui.widget_text_frame import WidgetTextFrame
        from opengl_gui.widget_distance_sensor import WidgetDistanceSensor
        from opengl_gui.widget_model_frame import WidgetModelFrame
        from opengl_gui.widget_camera_frame import WidgetCameraFrame

        if "widgets" in self.params:
            for i in range(len(self.params["widgets"])):
                widget_type = self.params["widgets"][i]["type"]

                if widget_type == "frame":
                    widget = WidgetFrame(visualisation, variables, textures, params["widgets"][i])
                elif widget_type == "text_frame":
                    widget = WidgetTextFrame(visualisation, variables, textures, params["widgets"][i])    
                elif widget_type == "bar_graph":
                    widget = WidgetBarGraph(visualisation, variables, textures, params["widgets"][i])
                elif widget_type == "distance_sensors":
                    widget = WidgetDistanceSensor(visualisation, variables, textures, params["widgets"][i])
                elif widget_type == "model_frame":
                    widget = WidgetModelFrame(visualisation, variables, textures, params["widgets"][i])
                elif widget_type == "camera_frame":
                    widget = WidgetCameraFrame(visualisation, variables, textures, params["widgets"][i])
                else:
                    widget = Widget(visualisation, variables, textures, params["widgets"][i])

                self.child_widgets.append(widget)



    def visible_on(self):
        self.visible = True

    def visible_off(self):
        self.visible = False

    def render(self):
        if self.visible:
            self.visualisation.push()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()

            self.visualisation.pop()