#include <iostream>
using namespace std;

class Circle {
    double radius = 0;
public:
    void setRadius(double r) {          // mutator / setter
        if (r >= 0) radius = r;
        else cout << "Invalid radius" << endl;
    }
    double getRadius() const { return radius; }
};

int main() {
    Circle c;
    c.setRadius(5);
    c.setRadius(-1);                    // rejected
    cout << c.getRadius() << endl;      // 5
}
