import glfw
import numpy
import json

from . import load_textures
from . import gl_visualisation
from . import variables
from . import widget


from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *



class GLGui:
    def __init__(self, json_file_name):

        print("\n\n\nstarting gl gui")

        with open(json_file_name) as f:
            json_data = json.load(f)


        self.width              = int(json_data["width"])
        self.height             = int(json_data["height"])
        self.background_texture = int(json_data["background_texture"])
        self.window_label       = str(json_data["window_label"])

        result = self._create_window()

        print("create window result ", result)


        self.textures       = load_textures.LoadTextures(json_data)
        self.visualisation  = gl_visualisation.GLVisualisation()
        self.variables      = variables.Variables()
        
        self.widgets        = widget.Widget(self.visualisation, self.variables, self.textures, json_data["widgets"])
 
        print("gl gui init done")


    def _create_window(self):

        # Initialize the library
        if not glfw.init():
            return -1
        
        # Create a windowed mode window and its OpenGL context
        self.window = glfw.create_window(self.width, self.height, self.window_label, None, None)
        if not self.window:
            glfw.terminate()
            return -2

        
        # Make the window's context current
        glfw.make_context_current(self.window)
        
        

        return 0


    def main(self):
        while self.main_step() != True:
            pass

        glfw.terminate()


    def main_step(self):
        self._render()
        glfw.swap_buffers(self.window)
        glfw.poll_events()

        return glfw.window_should_close(self.window)



    def _render(self):
        
        aspect = self.width/self.height
        glViewport(0, 0, 2*self.width, 2*self.height)
        glMatrixMode(GL_PROJECTION)
        glLoadIdentity()
        
        glOrtho(-1*aspect, 1*aspect, -1, 1, -1, 1)

        glEnable(GL_DEPTH_TEST)

        glMatrixMode(GL_MODELVIEW)
        glLoadIdentity()
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)

        glClearColor(0, 0, 0, 0)
        
        self.visualisation.translate(0.0, 0.0, 0.0)

        self.visualisation.push()
        k = 3.6/self.width
        self.visualisation.translate(0.0, 0.0, -0.0001)
        self.visualisation.paint_textured_rectangle(self.width*k, self.height*k, self.textures.get(self.background_texture))
        self.visualisation.pop()

        self.visualisation.push()
        self.widgets.render()
        self.visualisation.pop()

        

