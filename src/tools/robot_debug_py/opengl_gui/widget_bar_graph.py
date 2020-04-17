from opengl_gui.widget_frame import WidgetFrame
import numpy

class WidgetBarGraph(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)

        self.br  = float(params["bar_color"][0])
        self.bg  = float(params["bar_color"][1])
        self.bb  = float(params["bar_color"][2])

        self.min = float(params["min_value"])
        self.max = float(params["max_value"])

        self.enlight_max_value = bool(params["enlight_max_value"])
        
        min_out = 0.0
        max_out = self.height*0.9

        self.k = (max_out-min_out)/(self.max-self.min)
        self.q = max_out - self.k*self.max

    def render(self):
        if self.visible:
            self.visualisation.push()   
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            values = numpy.asarray(self.variables.v[self.variable_name])
            
            count   = values.shape[0]
            max_idx = numpy.argmax(values)


            for i in range(count):
                v_raw = values[i]
                value = self._convert(v_raw)

                w  = self.width*0.9
                rw = w/count
                rh = value

                x_ = -self.width/2.0 + rw*0.9 + i*rw*1.05
                y_ = -rh/2.0 + self.height/2.0

                self.visualisation.push()

                if self.enlight_max_value and i == max_idx:
                    self.visualisation.set_color(self.br*0.5, 1.0, self.bb*0.5)
                else:
                    self.visualisation.set_color(self.br, self.bg, self.bb)

                self.visualisation.translate(x_, -y_, 0)
                self.visualisation.paint_rectangle(rw, rh)
                self.visualisation.pop()

            
                self.visualisation.push()
                string = self._get_rounded(v_raw, 2)

                
                self.visualisation.print_string(x_ - rw/4.0, -y_ + rh/2.0 + 0.01, 0, string, self.font_size*0.5)
                self.visualisation.pop()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()

            self.visualisation.pop()


    def _convert(self, value):
        if value > self.max:
            value = self.max
        if value < self.min:
            value = self.min

        return self.k*value + self.q

    def _get_rounded(self, value, precision):
        return str(round(value, precision))
