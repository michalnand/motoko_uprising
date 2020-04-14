from opengl_gui.widget              import Widget

from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *

import numpy

class WidgetFrame(Widget):
    def __init__(self, visualisation, variables, textures, params):
        super().__init__(visualisation, variables, textures, params)   
 
        self.width       = float(self.params["width"])
        self.height      = float(self.params["height"])
        self.label       = str(self.params["label"])
        self.filled      = bool(self.params["filled"])

        self.frame_width = float(self.params["frame width"])



    def render(self):
        if self.visible:
            self.visualisation.push()
            self.visualisation.translate(self.x, self.y, self.z)

            self.render_frame()

            for i in range(len(self.child_widgets)):
                self.child_widgets[i].render()
  
            self.visualisation.pop()

    def render_frame(self):

        if self.filled:
            self.visualisation.push()
            self.visualisation.set_color(self.r*0.01, self.g*0.01, self.b*0.01)
            self.visualisation.paint_rectangle(self.width, self.height)
            self.visualisation.pop()


        self.visualisation.push()

        self.visualisation.set_color(self.r, self.g, self.b)
        self.visualisation.translate(0, -self.height/2.0 - self.frame_width/2.0, 0.0)
        self.visualisation.paint_rectangle(self.width, self.frame_width)

        self.visualisation.pop()

        self.visualisation.push()

        self.visualisation.set_color(self.r, self.g, self.b)
        self.visualisation.translate(0, self.height/2.0 - self.frame_width/2.0, 0.0)
        self.visualisation.paint_rectangle(self.width, self.frame_width)

        self.visualisation.pop()

        self.visualisation.push()

        self.visualisation.set_color(self.r, self.g, self.b)
        self.visualisation.translate(-self.width/2.0 + self.frame_width/2.0, 0.0, 0.0)
        self.visualisation.paint_rectangle(self.frame_width, self.height)

        self.visualisation.pop()

        self.visualisation.push()

        self.visualisation.set_color(self.r, self.g, self.b)
        self.visualisation.translate(self.width/2.0 - self.frame_width/2.0, 0.0, 0.0)
        self.visualisation.paint_rectangle(self.frame_width, self.height)

        self.visualisation.pop()

        self.visualisation.push()

        frame_width = 0.2
        height_ = frame_width/2.0
        k1 = 1.0
        k2 = 0.5

        self.visualisation.translate(0, self.height/2.0 + frame_width/4.0, 0.0)

        glBegin(GL_QUADS) 

        glColor3f(self.r*k1, self.g*k1, self.b*k1) 
        glVertex3f( + self.width/2.0,  + height_/2.0, 0.0)
        
        glColor3f(self.r*k2, self.g*k2, self.b*k2) 
        glVertex3f( - self.width/2.0,  + height_/2.0, 0.0)
        
        glColor3f(self.r*k2, self.g*k2, self.b*k2) 
        glVertex3f( - self.width/2.0,  - height_/2.0, 0.0)
        
        glColor3f(self.r*k1, self.g*k1, self.b*k1) 
        glVertex3f( + self.width/2.0,  - height_/2.0, 0.0)

        glEnd()

        self.visualisation.pop()


        self.visualisation.push()

        self.visualisation.set_color(1, 1, 1)

        self.visualisation.print_string(0.02 + -self.width/2, self.height/2 + 0.025, 0, self.label, self.font_size)
        
        self.visualisation.pop()

