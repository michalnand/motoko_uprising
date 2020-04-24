from opengl_gui.widget_frame import WidgetFrame

import numpy

class WidgetCameraFrame(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)
        
        self.min = None
        self.max = None

        if "min" in params:
            self.min  = float(params["min"])

        if "max" in params:
            self.max  = float(params["max"])

        
     
    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            self.visualisation.push()

            self.visualisation.set_color(1, 1, 1)

            value = self.variables.v[self.variable_name]


            value = numpy.asarray(value)

            if self.min is not None and self.max is not None:
                
                eps = 0.001
                k = (self.max - self.min)/(eps + value.max() - value.min())
                q = self.max - k*value.max()
                value = k*value + q
                
                value = numpy.clip(value, self.min, self.max)

            upscale_ratio = 32//value.shape[-1]
            if upscale_ratio > 1:
                value = value.repeat(upscale_ratio,axis=-1).repeat(upscale_ratio,axis=-2)

            
            self.visualisation.paint_textured_rectangle_dynamic(self.width, self.height, numpy.asarray(value))

            self.visualisation.pop()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()

            self.visualisation.pop()

    def _split(self, text, splittBy):
        return text.split(splittBy)