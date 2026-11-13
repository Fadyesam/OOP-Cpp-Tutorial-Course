#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle() : radius(0) {}                         // default constructor
    Circle(double r) : radius(r >= 0 ? r : 0) {}    // constructor with a parameter
    double getRadius() const { return radius; }
};

int main() {
    Circle a;
    Circle b(2.5);
    cout << a.getRadius() << " " << b.getRadius() << endl;   // 0 2.5
}
