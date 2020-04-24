from opengl_gui.widget_frame import WidgetFrame
import numpy

class WidgetDistanceSensor(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)
        self.min = 0.5
        self.max = 1.0

    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            values = numpy.asarray(self.variables.v[self.variable_name], dtype=float)

            k = (1.0 - 0.0)/(self.max - self.min)
            q = 1.0 - k*self.max
            values_normalised = k*values + q
            values_normalised = numpy.clip(values_normalised, 0.0, 1.0)

            values_count = len(values)

            pi = 3.141592654
            radius = self.width/2.5

            arc_length = 2.0*pi/values_count
            offset = (-15.0 + 120)*pi/180.0

            self.visualisation.push()

            self.visualisation.translate(0.0, 0.0, 0.01)

            self.visualisation.set_color(0.6, 0.6, 0.6)
            self.visualisation.paint_circle(radius)

            for i in range(values_count):
                cl = values_normalised[i]
               

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
