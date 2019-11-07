//
// Created by T10115885 on 11/7/2019.
//

#include "Circle.h"

Circle::Circle() {
    radius = 1.0;
}

Circle::Circle(double radius) : radius(radius) {}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double radius) {
    Circle::radius = radius;
}

double Circle::getArea() {
    return 3.14159 * radius * radius;
}

