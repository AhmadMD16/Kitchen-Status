# Kitchen Status

This device checks if a room is occupied or not based on the light that is in that specific room and then communicates the information through WIFI to a web server that has been set up on a ESP8266 board.

![3D-model](https://github.com/AhmadMD16/Kitchen-Status/blob/main/images/Web-server.png)

## Description
Living in a student dormitory can be challenging sometimes, especially when you have to share some common areas such as the kitchen with other students. It can sometimes get awkward when you accidentally open the kitchen door to find out that it’s already in use by some other student making their third bowl of instant noodles and to be honest, I’ve had enough. That’s why I created this simple, yet revolutionary device that solved this problem for me.

As seen in the image above, I've created a web server that can be accessed through a phone and it tells you if the kitchen is occupied or not based on the light that's in the kitchen. If the kitchen light is switched on then the web server will display red color, indicating that the room is in use by someone else. But if the kithcen light is switched off it will show the opposite. It's not really that complicated but I chose to do this to save myself from all the awkwardness.

The components used for this build are:

* ESP8266
* Photoresistor
* Resistor

The schematic of the build:
![Schematic](https://github.com/AhmadMD16/Kitchen-Status/blob/main/images/Circuit.png)
