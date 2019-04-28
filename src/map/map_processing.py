import json
import numpy
import matplotlib.pyplot as plt

json_file = open("map.json")
json = json.load(json_file)


record_size = len(json["map"])

position = []
value = []

pos = 0.0
for i in range(0, record_size):

    pos+= json["map"][i][1]
    position.append(pos)

    value.append(1*json["map"][i][2])


plt.plot(position, value)
plt.xlabel("x [mm]")
plt.ylabel("value")
plt.show()
