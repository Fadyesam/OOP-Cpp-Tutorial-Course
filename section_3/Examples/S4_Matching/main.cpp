#include <iostream>
using namespace std;

// C: Header file (.h) holds this declaration
class Circle {
private:                                // E: private data member
    double radius;
public:
    Circle(double r = 0);               // F: constructor
    double getArea() const;             // A: const member function
};

// D: Implementation file (.cpp) holds these definitions
Circle::Circle(double r) : radius(r) {}                 // B: scope resolution ::
double Circle::getArea() const { return 3.14 * radius * radius; }

int main() {
    Circle c(2);                        // F runs here automatically
    cout << c.getArea() << endl;        // 12.56
}
