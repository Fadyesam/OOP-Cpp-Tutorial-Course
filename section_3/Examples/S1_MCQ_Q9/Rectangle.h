#pragma once
class Rectangle {
private:
    double width = 0, length = 0;
public:
    void setSize(double w, double l);
    double area() const;
};
