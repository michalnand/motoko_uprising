import numpy
import os.path

class ObjModel:
    def __init__(self, file_name_prefix):

        self.materials          = {}
        self.colors             = []
        self.points             = []
        self.polygons           = []

        self._load_mtl(file_name_prefix + ".mtl")
        self._load_obj(file_name_prefix + ".obj")

    def _load_mtl(self, file_name):
        if os.path.isfile(file_name) != True:
            return

        fp = open(file_name, "r")

        line = fp.readline()

        material_id = "none"
        while line:
            if line.find("newmtl ") == 0:
                splitted = line.split()
                material_id = splitted[1]
            
            if line.find("Kd ") == 0:
                splitted = line.split()
                r = float(splitted[1])
                g = float(splitted[2])
                b = float(splitted[3])

                color = [r, g, b]
                self.materials[material_id] = color

            line = fp.readline()

        fp.close()



    def _load_obj(self, file_name):

        fp = open(file_name, "r")

        line = fp.readline()

        current_color = [1.0, 1.0, 1.0]

        while line:
            if line.find("v ") == 0:
                self._parse_vertice(line)
            if line.find("f ") == 0:
                self._parse_polygons(line)
                self.colors.append(current_color)

            if line.find("usemtl") == 0:
                material_id = self._parse_material(line)
                if material_id in self.materials:
                    current_color = self.materials[material_id]

            line = fp.readline()
        fp.close()

        self.points = numpy.asarray(self.points, dtype=float)

    def _parse_vertice(self, line):
        splitted = line.split()
        x = float(splitted[1])
        y = float(splitted[2])
        z = float(splitted[3])

        self.points.append([x, y, z])

    def _parse_polygons(self, line):
        splitted = line.split()

        points = []

        for i in range(len(splitted) - 1):
            p = int(splitted[i+1].split("/")[0]) - 1
            points.append(p)
        
        self.polygons.append(points)

    def _parse_material(self, line):
        splitted = line.split()
        material_id = splitted[1]
        return material_id
