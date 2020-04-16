from opengl_gui.widget_frame import WidgetFrame

import numpy

class WidgetCameraFrame(WidgetFrame):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)

        
     
    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            self.visualisation.push()

            self.visualisation.set_color(1, 1, 1)

            value = self.variables.v[self.variable_name]


            value = numpy.asarray(value)

            if value.shape[-1] <= 32 or value.shape[-2] <= 32:
                upscale = 4
                value = value.repeat(upscale,axis=-1).repeat(upscale,axis=-2)

            
            self.visualisation.paint_textured_rectangle_dynamic(self.width, self.height, numpy.asarray(value))

            self.visualisation.pop()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()

            self.visualisation.pop()

    def _split(self, text, splittBy):
        return text.split(splittBy)