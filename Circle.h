//
// Created by T10115885 on 11/7/2019.
//

#ifndef SHAPES_CIRCLE_H
#define SHAPES_CIRCLE_H

#include "Shape.h"

class Circle: public Shape {
private:
    double radius;
public:
    Circle();

    Circle(double radius);

    double getRadius() const;

    void setRadius(double radius);


    double getArea() override;
};


#endif //SHAPES_CIRCLE_H
