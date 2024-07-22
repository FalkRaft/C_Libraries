#ifndef MACROEMATH_H
#define MACROEMATH_H
#include <stdio.h>
#include <math.h>

// Basic math functions
#define add(x, y) (x) + (y)
#define subt(x, y) (x) - (y)
#define mult(x, y) (x) * (y)
#define divd(x, y) (x) / (y)

// Complex math functions
long double pytheol(long double x, long double y){
    return sqrt(pow(x, 2) + pow(y, 2));
}
long double pytheos(long double hypotenuse, long double y){
    return sqrt(pow(hypotenuse, 2) - pow(y, 2));
}
#define volcylin(radius, height) M_PI * pow((radius), 2) * (height)
#define areacylin(radius, height) (M_PI *pow((radius), 2) * 2) + (M_PI * ((radius) * 2) * (height))
#define areacirc(radius) M_PI * (pow((radius), 2))
#define arearect(corner1, corner2) (corner1) * (corner2)
#define areatri(corner1, corner2) ((corner1) * (corner2)) / 2
#define volcuboid(length, width, height) (length) * (width) * (height)
#define voltriprism(length, width, height) ((length) * (width) * (height)) / 2
#define areasphere(radius) 4 * (M_PI * (pow((radius), 2)))
#define volsphere(radius) (4.0/3.0) * M_PI * (pow((radius), 3))
#define areacuboid(length, width, height) (((length) * (width)) * 2) + (((length) * (height)) * 2) + (((width) * (height)) * 2)
#define volcone(radius, height) M_PI * (pow((radius), 2)) * ((height)/3.0)
long double areacone(long double radius, long double height){
    return M_PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
}
#define lsacone(radius, height) M_PI * radius * sqrt(pow((height), 2) + pow((radius), 2))
#define lsatriprism(trilen1, trilen2, trilen3, height) ((trilen1) + (trilen2) + (trilen3)) * (height)

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