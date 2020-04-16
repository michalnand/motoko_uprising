import numpy

from OpenGL.GL import *
from OpenGL.GLUT import *
from OpenGL.GLU import *



class GLVisualisation:
    def __init__(self):
        pass

    def finish(self):
        glutSwapBuffers()

    def push(self):
        glPushMatrix()

    def pop(self):
        glPopMatrix()

    def translate(self, x, y, z):
        glTranslatef(x, y, z)

    def rotate(self, angle_x, angle_y, angle_z):
        glRotatef(angle_x, 1.0, 0.0, 0.0)
        glRotatef(angle_y, 0.0, 1.0, 0.0)
        glRotatef(angle_z, 0.0, 0.0, 1.0)

    def set_color(self, r, g, b):
        glColor3f(r, g, b)

    def paint_point(self):
        glBegin(GL_POINTS)
        glVertex3f(0.0, 0.0, 0.0)
        glEnd()

    def paint_square(self, size):
        glBegin(GL_QUADS)

        glVertex3f( + size/2.0,  + size/2.0, 0.0)
        glVertex3f( - size/2.0,  + size/2.0, 0.0)
        glVertex3f( - size/2.0,  - size/2.0, 0.0)
        glVertex3f( + size/2.0,  - size/2.0, 0.0)

        glEnd()

    def paint_polygon(self, points, polygon, scale = 1.0):

        glBegin(GL_TRIANGLES)

        for i in range(len(polygon)):
            idx = polygon[i]
            glVertex3f(points[idx][0]*scale, points[idx][1]*scale, points[idx][2]*scale)
        
        glEnd()

    def paint_rectangle(self, width,  height):
        glBegin(GL_QUADS)

        glVertex3f( + width/2.0,  + height/2.0, 0.0)
        glVertex3f( - width/2.0,  + height/2.0, 0.0)
        glVertex3f( - width/2.0,  - height/2.0, 0.0)
        glVertex3f( + width/2.0,  - height/2.0, 0.0)

        glEnd()

    def paint_textured_rectangle(self, width, height, texture_id):
        glActiveTexture(GL_TEXTURE0)
        glEnable(GL_TEXTURE_2D)
        glBindTexture(GL_TEXTURE_2D, texture_id)

        glColor3f(1.0, 1.0, 1.0)

        glBegin(GL_QUADS)
        glNormal3f(0.0, 0.0, 1.0)

        glTexCoord2d(1, 1) 
        glVertex3f(width/2.0, height/2.0, 0.0)

        glTexCoord2d(1, 0) 
        glVertex3f(width/2.0, -height/2.0, 0.0)

        glTexCoord2d(0, 0) 
        glVertex3f(-width/2.0, -height/2.0, 0.0)

        glTexCoord2d(0, 1) 
        glVertex3f(-width/2.0, height/2.0, 0.0)

        glEnd()

        glDisable(GL_TEXTURE_2D)

    def paint_textured_rectangle_dynamic(self, width, height, texture_array):

        texture_id = glGenTextures(1)

        glBindTexture(GL_TEXTURE_2D, texture_id)

        k = 255/(numpy.max(texture_array) - numpy.min(texture_array))
        q = 255 - k*numpy.max(texture_array)
        texture_array_normalised = texture_array*k + q

        if len(texture_array.shape) == 3:
            texture_height= texture_array.shape[1]
            texture_width = texture_array.shape[2]
            texture_array_ = numpy.moveaxis(texture_array_normalised, 0, 2).flatten().astype(dtype=numpy.uint8)
            glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, texture_width, texture_height, 0, GL_RGB, GL_UNSIGNED_BYTE, texture_array_)
            
        if len(texture_array.shape) == 2:
            texture_height= texture_array.shape[0]
            texture_width = texture_array.shape[1]
            texture_array_ = texture_array_normalised.flatten().astype(dtype=numpy.uint8)
            glTexImage2D(GL_TEXTURE_2D, 0, GL_LUMINANCE, texture_width, texture_height, 0, GL_LUMINANCE, GL_UNSIGNED_BYTE, texture_array_)
         

        glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST)


        glActiveTexture(GL_TEXTURE0)
        glEnable(GL_TEXTURE_2D)
        glBindTexture(GL_TEXTURE_2D, texture_id)

        glColor3f(1.0, 1.0, 1.0)

        glBegin(GL_QUADS)
        glNormal3f(0.0, 0.0, 1.0)


        glTexCoord2d(1, 0) 
        glVertex3f(width/2.0, height/2.0, 0.0)

        glTexCoord2d(1, 1) 
        glVertex3f(width/2.0, -height/2.0, 0.0)

        glTexCoord2d(0, 1) 
        glVertex3f(-width/2.0, -height/2.0, 0.0)

        glTexCoord2d(0, 0) 
        glVertex3f(-width/2.0, height/2.0, 0.0)


        glEnd()

        glDeleteTextures(1, texture_id)
        glDisable(GL_TEXTURE_2D)

    def paint_line(self, x0, y0, z0, x1,  y1,  z1):
        glBegin(GL_LINES)
        glVertex3f( x0, y0, z0)
        glVertex3f( x1, y1, z1)
        glEnd()

    def paint_quad( self,
                    x0, y0, z0, r0, g0, b0,
                    x1, y1, z1, r1, g1, b1,
                    x2, y2, z2, r2, g2, b2,
                    x3, y3, z3, r3, g3, b3):
        glBegin(GL_QUADS)

        glColor3f(r0, g0, b0)  
        glVertex3f(x0, y0, z0)

        glColor3f(r1, g1, b1)  
        glVertex3f(x1, y1, z1)

        glColor3f(r2, g2, b2)  
        glVertex3f(x2, y2, z2)

        glColor3f(r3, g3, b3)  
        glVertex3f(x3, y3, z3)

        glEnd()

    def paint_cube(self, size):
        a = size/2.0
        glBegin(GL_QUADS)    
        
        glVertex3f( a, a, -a)
        glVertex3f(-a, a, -a)
        glVertex3f(-a, a,  a)
        glVertex3f( a, a,  a)

        glVertex3f( a, -a,  a)
        glVertex3f(-a, -a,  a)
        glVertex3f(-a, -a, -a)
        glVertex3f( a, -a, -a)

        glVertex3f( a,  a, a)
        glVertex3f(-a,  a, a)
        glVertex3f(-a, -a, a)
        glVertex3f( a, -a, a)

        glVertex3f( a, -a, -a)
        glVertex3f(-a, -a, -a)
        glVertex3f(-a,  a, -a)
        glVertex3f( a,  a, -a)

        glVertex3f(-a,  a,  a)
        glVertex3f(-a,  a, -a)
        glVertex3f(-a, -a, -a)
        glVertex3f(-a, -a,  a)

        glVertex3f(a,  a, -a)
        glVertex3f(a,  a,  a)
        glVertex3f(a, -a,  a)
        glVertex3f(a, -a, -a)
        
        glEnd()

    def paint_cuboid(self, width, height, depth):
        w = width/2.0
        h = height/2.0
        d = depth/2.0

        glBegin(GL_QUADS);        

        glVertex3f( w, h, -d)
        glVertex3f(-w, h, -d)
        glVertex3f(-w, h,  d)
        glVertex3f( w, h,  d)

        glVertex3f( w, -h,  d)
        glVertex3f(-w, -h,  d)
        glVertex3f(-w, -h, -d)
        glVertex3f( w, -h, -d)

        glVertex3f( w,  h, d)
        glVertex3f(-w,  h, d)
        glVertex3f(-w, -h, d)
        glVertex3f( w, -h, d)

        glVertex3f( w, -h, -d)
        glVertex3f(-w, -h, -d)
        glVertex3f(-w,  h, -d)
        glVertex3f( w,  h, -d)

        glVertex3f(-w,  h,  d)
        glVertex3f(-w,  h, -d)
        glVertex3f(-w, -h, -d)
        glVertex3f(-w, -h,  d)

        glVertex3f(w,  h, -d)
        glVertex3f(w,  h,  d)
        glVertex3f(w, -h,  d)
        glVertex3f(w, -h, -d)

        glEnd()


    def paint_circle(self, radius, steps = 32):
        pi = 3.141592654
        glBegin(GL_POLYGON)
        
        for i in range(steps):
            angle = i*2.0*pi/steps
            glVertex3f(radius*numpy.cos(angle), radius*numpy.sin(angle), 0.0)
        
        glEnd()

    def paint_circle_arc(self, radius, arc_length, offset, steps = 32):
        pi = 3.141592654

        begin   = -arc_length/2.0 + offset
        end     = arc_length/2.0 + offset
        step    = (begin - end)/steps

        glBegin(GL_POLYGON)
        glVertex3f(0.0, 0.0, 0.0)

        angle = begin
        for i in range(steps):
            glVertex3f(radius*numpy.cos(angle), radius*numpy.sin(angle), 0.0)
            angle+= step
        
        glEnd()


       

    def paint_sphere(self, radius, steps = 32):
        glutSolidSphere(radius, 20.0, 20.0)

    def print_string(self, x,  y,  z, string, font_size):
        

        for i in range(len(string)):
            glPushMatrix()
            glTranslatef(x + i*font_size*0.75 + font_size/2, y + font_size/2, z + 0.001)

            c = ord(string[i])
            x_ = (c%16)
            y_ = (c//16)
            
            t_size  = 1.0/16.0
            tx      = x_*t_size
            ty      = (15 - y_)*t_size
            
            glActiveTexture(GL_TEXTURE0)
            glEnable(GL_TEXTURE_2D)
            glBindTexture(GL_TEXTURE_2D, 1)

            glColor3f(1.0, 1.0, 1.0)

            glBegin(GL_QUADS)
            glNormal3f(0.0, 0.0, 1.0)

            glTexCoord2d(tx + t_size, ty + t_size) 
            glVertex3f(font_size/2.0, font_size/2.0, 0.0)

            glTexCoord2d(tx + t_size, ty) 
            glVertex3f(font_size/2.0, -font_size/2.0, 0.0)

            glTexCoord2d(tx, ty) 
            glVertex3f(-font_size/2.0, -font_size/2.0, 0.0)

            glTexCoord2d(tx, ty + t_size) 
            glVertex3f(-font_size/2.0, font_size/2.0, 0.0)

            glEnd()

            glDisable(GL_TEXTURE_2D)

            glPopMatrix()

       

        '''
        glRasterPos3f(x,y,z)

        font = GLUT_BITMAP_HELVETICA_10

        if big_font:
            font = GLUT_BITMAP_TIMES_ROMAN_24

        for i in range(len(string)):
            glutBitmapCharacter(font, ord(string[i]))
        '''