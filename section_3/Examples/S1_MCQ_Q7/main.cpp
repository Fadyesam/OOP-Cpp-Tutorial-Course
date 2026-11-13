#include <iostream>
using namespace std;

class Circle {
    double radius = 0;
public:
    void setRadius(double r) { radius = r; }
    double getRadius() const { return radius; }
};

int main() {
    Circle c;
    c.setRadius(4);                     // dot with a normal object
    cout << c.getRadius() << endl;      // 4

    Circle* p = &c;
    p->setRadius(6);                    // arrow with a pointer
    cout << p->getRadius() << endl;     // 6
    // c->setRadius(1);                 // ERROR
}
