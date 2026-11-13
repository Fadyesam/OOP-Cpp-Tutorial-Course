#include <iostream>
using namespace std;

class Circle {
    double radius = 2.0;
public:
    double getRadius() const {
        // radius = 5;        // ERROR
        return radius;
    }
    void setRadius(double r) { radius = r; }
};

int main() {
    Circle c;
    c.setRadius(3);
    const Circle fixedCircle;
    //fixedCircle does not allow modification of its members, so we cannot call setRadius on it.
    cout << c.getRadius() << " " << fixedCircle.getRadius() << endl;   // 3 2
    // fixedCircle.setRadius(9);   // ERROR setRadius() is not const
}
