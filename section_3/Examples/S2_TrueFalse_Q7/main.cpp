#include <iostream>
using namespace std;

class Circle {
    double radius = 0;
public:
    void setRadius(double r) { if (r >= 0) radius = r; }   // validation
    double getRadius() const { return radius; }
};

int main() {
    Circle c;
    c.setRadius(-3);                    // ignored
    cout << c.getRadius() << endl;      // 0
}
