#pragma once

class Circle
{
private:
    double radius;

public:
    Circle();
    void setRadius(double r);
    double getRadius() const;
    double getArea() const;
};
