//
// Created by T10115885 on 11/7/2019.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 2.0;
    width = 1.0;

}

Rectangle::Rectangle(double length, double width) : length(length), width(width) {}

double Rectangle::getLength() const {
    return length;
}

void Rectangle::setLength(double length) {
    Rectangle::length = length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setWidth(double width) {
    Rectangle::width = width;
}

double Rectangle::getArea() {
    return  width * length;

}
