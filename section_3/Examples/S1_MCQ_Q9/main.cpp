#include <iostream>
#include "Rectangle.h"
using namespace std;
int main() {
    Rectangle r;
    r.setSize(4, 3);
    cout << r.area() << endl;           // 12
}
