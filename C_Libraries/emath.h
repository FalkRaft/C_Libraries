#ifndef EMATH_H
#define EMATH_H



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

#include <math.h>

long double pytheol(long double x, long double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}
long double pytheos(long double hypotenuse, long double y){
    return sqrt(pow(hypotenuse, 2) - pow(y, 2));
}

long double volcylin(long double radius, long double height){
    return M_PI * pow(radius, 2) * height;
}

long double areacylin(long double radius, long double height){
    return (M_PI * pow(radius, 2) * 2) + (M_PI * (radius * 2) * height);
}

long double areacirc(long double radius){
    return M_PI * pow(radius, 2);
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
    return 4 * (M_PI * pow(radius, 2));
}

long double volsphere(long double radius){
    return (4.0/3.0) * M_PI * pow(radius, 3);
}

long double areacuboid(long double length, long double width, long double height){
    return ((length * width) * 2) + ((length * height) * 2) + ((width * height) * 2);
}

long double volcone(long double radius, long double height){
    return M_PI * pow(radius, 2) * (height/3.0);
}

long double areacone(long double radius, long double height){
    return M_PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
}

long double lsacone(long double radius, long double height){
    return M_PI * radius * sqrt(pow(height, 2) + pow(radius, 2));
}

long double lsatriprism(long double trilen1, long double trilen2, long double trilen3, long double height){
    return (trilen1 + trilen2 + trilen3) * height;
}

long double factorial(long double number){
    long double fact = 0;
    if (number < 0){
        return 1;
    } else {
        for (int i = 1; i <= number; ++i){
            fact *= i;
        }
    return fact;
    }
}

#endif
