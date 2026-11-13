#include <iostream>
using namespace std;

class Rectangle {
private:
    double width = 0, length = 0;
public:
    void setWidth(double w)  { if (w > 0) width = w; }
    void setLength(double l) { if (l > 0) length = l; }
    double area() const { return width * length; }
};

int main() {
    Rectangle rect;
    rect.setWidth(-5);        // rejected by the setter
    rect.setWidth(4);
    rect.setLength(3);
    // rect.width = -5;       // ERROR
    cout << rect.area() << endl;   // 12
}
