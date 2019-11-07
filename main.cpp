#include <iostream>
#include <vector>
using  namespace std;

#include "Shape.h"
#include "Rectangle.h"
#include "Circle.h"

int main() {


   // Shape one;
    Rectangle two(4,5);
    Circle three(6);

    //cout<<one.getArea()<<endl;
    cout<<two.getArea()<<endl;
    cout<<three.getArea()<<endl;

    Shape* onePtr = &two;
    Shape* twoPtr = &three;

    cout<<onePtr->getArea()<<endl;
    cout<<twoPtr->getArea()<<endl;


    vector<Shape *> myShapes = vector<Shape *>(0);

  //  myShapes.push_back(new Shape());
    myShapes.push_back(new Rectangle());
    myShapes.push_back(new Rectangle(3,4));
    myShapes.push_back(new Circle(2));
    myShapes.push_back(new Circle());

    for (int i = 0; i <myShapes.size() ; ++i) {
        cout<<myShapes.at(i)->getArea()<<endl;

    }



    return 0;
}