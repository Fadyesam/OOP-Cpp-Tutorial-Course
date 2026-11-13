#include <iostream>
using namespace std;

class Circle {
    double radius = 1;
public:
    void setRadius(double r) { radius = r; }
    double getRadius() const { return radius; }
};

int main() {
    Circle c;
    // c.radius = 5;                    // ERROR
    c.setRadius(5);                     // the allowed way
    cout << c.getRadius() << endl;      // 5
}
