#include <iostream>
using namespace std;

class Circle {
    double radius = 0;
public:
    void setRadius(double r);      // declaration inside the class
    double getRadius() const;
};

void Circle::setRadius(double r) { radius = r; }       // Circle:: links it to the class
double Circle::getRadius() const { return radius; }
// void setRadius(double r) { radius = r; }            // ERROR

int main() {
    Circle c;
    c.setRadius(5);
    cout << c.getRadius() << endl;   // 5
}
