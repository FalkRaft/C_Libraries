#include <stdio.h>
#include <stdlib.h>

//Basic math functions

double add(double x, double y){
    return x + y;
}

double subt(double x, double y){
    return x - y;
}

double mult(double x, double y){
    return x * y;
}

double divide(double x, double y){
    return x / y;
}


//Complex math functions

double pi = 3.141592;

#include <math.h>

double pytheo(double x, double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}

double volcylin(double radius, double height){
    return pi * pow(radius, 2) * height;
}

double areacylin(double radius, double height){
    return (pi * pow(radius, 2) * 2) + (pi * (radius * 2) * height);
}

double areacirc(double radius){
    return pi * pow(radius, 2);
}

double arearect(double corner1, double corner2){
    return corner1 * corner2;
}

double areatri(double corner1, double corner2){
    return (corner1 * corner2) / 2;
}

double volcuboid(double length, double width, double height){
    return length * width * height;
}

double voltriprism(double length, double width, double height){
    return (length * width * height) / 2;
}