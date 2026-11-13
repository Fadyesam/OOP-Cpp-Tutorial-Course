#include <iostream>
using namespace std;

class Rect {
    double w = 2, h = 3;
public:
    double getArea() const { return w * h; }   // const after the parentheses
};

int main() {
    Rect r;
    cout << r.getArea() << endl;        // 6
}
