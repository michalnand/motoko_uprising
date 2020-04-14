from opengl_gui.widget_frame import WidgetFrame
import numpy

class WidgetDistanceSensor(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)


    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            values = self.variables.v[self.variable_name]
            values_float = []
            values_count = len(values)

            for i in range(values_count):
                values_float.append(float(values[i]))

            pi = 3.141592654
            radius = self.width/2.5

            arc_length = 2.0*pi/values_count
            offset = -15.0*pi/180.0

            self.visualisation.push()

            self.visualisation.translate(0.0, 0.0, 0.01)

            self.visualisation.set_color(0.6, 0.6, 0.6)
            self.visualisation.paint_circle(radius)

            for i in range(values_count):
                cl = values[i]
                if cl < 0.1:
                    cl = 0.1
                if cl > 1.0:
                    cl = 1.0


                self.visualisation.push() 

                self.visualisation.translate(0.0, 0.0, 0.01)

                self.visualisation.set_color(0.0, cl, 0.0)
                self.visualisation.paint_circle_arc(radius, arc_length*0.9, offset - arc_length/4.0)
    
                self.visualisation.pop()


                self.visualisation.push()

                string = str(round(values[i], 3))
                angle = offset - arc_length/4.0

                self.visualisation.set_color(0.2, 1.0 -cl, 0.2)
                self.visualisation.print_string(0.8*radius*numpy.cos(angle), 0.8*radius*numpy.sin(angle), 0.1, string, self.font_size)

                self.visualisation.pop()

                offset+= arc_length

            self.visualisation.pop()


            for i in range(len(self.child_widgets)):
                    self.child_widgets[i].render()

            self.visualisation.pop()
