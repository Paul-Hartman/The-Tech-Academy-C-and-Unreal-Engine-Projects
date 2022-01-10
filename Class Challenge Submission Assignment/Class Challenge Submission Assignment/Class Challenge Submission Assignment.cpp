

#include <iostream>
#include "Shape.h"

using std::cout;

int main()
{
    Rectangle rect1("Red", 10.0, 5.0);
    rect1.getArea(rect1.width,rect1.height);
    
    
    Triangle tri1("Blue", 4.6, 9.5);
    tri1.getArea(tri1.base, tri1.height);

    Circle circ1("Orange", 7.0);
    circ1.getArea(circ1.radius);
}

