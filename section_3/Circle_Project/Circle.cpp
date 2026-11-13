#include "Circle.h"
#include <iostream>

Circle::Circle() : radius(0.0)
{
}

void Circle::setRadius(double r)
{
    if (r >= 0)
        radius = r;
    else
        std::cout << "Invalid radius" << std::endl;
}

double Circle::getRadius() const
{
    return radius;
}

double Circle::getArea() const
{
    return 3.14 * radius * radius;
}
