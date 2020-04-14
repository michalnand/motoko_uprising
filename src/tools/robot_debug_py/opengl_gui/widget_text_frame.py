from opengl_gui.widget_frame import WidgetFrame

class WidgetTextFrame(WidgetFrame):
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

            lines = self._split(value, "\n")

            for line in range(len(lines)):
                y_pos = self.height/2.0 - 0.08 - line*0.06
                if y_pos < -self.height/2.0:
                    break

                self.visualisation.print_string(-self.width/2.0 + 0.03, y_pos, 0, lines[line], self.font_size)

            self.visualisation.pop()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()

            self.visualisation.pop()

    def _split(self, text, splittBy):
        return text.split(splittBy)