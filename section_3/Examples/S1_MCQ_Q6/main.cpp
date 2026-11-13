#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r) : radius(r) {}
    double getRadius() const { return radius; }          // accessor => const
    double getArea() const { return 3.14 * radius * radius; }
};

int main() {
    const Circle c(2);                  // const object: only const functions allowed
    cout << c.getRadius() << " " << c.getArea() << endl;   // 2 12.56
}
