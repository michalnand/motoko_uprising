from opengl_gui.widget_frame import WidgetFrame
from opengl_gui.obj_model import ObjModel

class WidgetModelFrame(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)


        model_file_name = str(params["model file name"])
        
        self.scale = float(params["scale"])

        self.rx = float(params["rotate"][0])
        self.ry = float(params["rotate"][1])
        self.rz = float(params["rotate"][2])

        self.sx = float(params["shift"][0])
        self.sy = float(params["shift"][1])
        self.sz = float(params["shift"][2])

        self.model = ObjModel(model_file_name)

        self.step = 0.0


    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            values = self.variables.v[self.variable_name]

            drx =  float(values[0]) 
            dry =  float(values[1]) + 60
            drz =  float(values[2]) + self.step

            self.visualisation.push()
            self.visualisation.translate(self.sx, self.sy, self.sz)
            self.visualisation.rotate(self.ry - dry, self.rx - drx, self.rz + drz)

            for i in range(len(self.model.polygons)):
                self.visualisation.push()

                color = self.model.colors[i]

                self.visualisation.set_color(color[0], color[1], color[2])
                self.visualisation.paint_polygon(self.model.points, self.model.polygons[i], self.scale)
                self.visualisation.pop()


            self.visualisation.pop()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()
   
            self.visualisation.pop()

            self.step+= 1
