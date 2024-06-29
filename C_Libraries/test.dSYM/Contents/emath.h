#include <stdio.h>

// Basic math functions

long double add(long double x, long double y){
    return x + y;
}

long double subt(long double x, long double y){
    return x - y;
}

long double mult(long double x, long double y){
    return x * y;
}

long double divide(long double x, long double y){
    return x / y;
}


// Complex math functions

long double pi = 3.1415926535897932384626433832795029;

#include <stdlib.h>
#include <math.h>

long double pytheo(long double x, long double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}

long double volcylin(long double radius, long double height){
    return pi * pow(radius, 2) * height;
}

long double areacylin(long double radius, long double height){
    return (pi * pow(radius, 2) * 2) + (pi * (radius * 2) * height);
}

long double areacirc(long double radius){
    return pi * pow(radius, 2);
}

long double arearect(long double corner1, long double corner2){
    return corner1 * corner2;
}

long double areatri(long double corner1, long double corner2){
    return (corner1 * corner2) / 2;
}

long double volcuboid(long double length, long double width, long double height){
    return length * width * height;
}

long double voltriprism(long double length, long double width, long double height){
    return (length * width * height) / 2;
}

long double areasphere(long double radius){
    return 4 * (pi * pow(radius, 2));
}

long double volsphere(long double radius){
    return 4/3 * (pi * pow(radius, 3);
}
