//
// Created by T10115885 on 11/7/2019.
//

#ifndef SHAPES_RECTANGLE_H
#define SHAPES_RECTANGLE_H


#include "Shape.h"

class Rectangle: public Shape {
private:
    double length, width;
public:
    Rectangle();

    Rectangle(double length, double width);

    double getLength() const;

    void setLength(double length);

    double getWidth() const;

    void setWidth(double width);


    double getArea() override;

};


#endif //SHAPES_RECTANGLE_H
