#include <iostream>
using namespace std;

class Box {
    double volume = 10;                 // no specifier => private (not protected)
};

struct Pack {
    double weight = 5;                  // struct => public
};

int main() {
    Box b;
    Pack k;
    // cout << b.volume;                // ERROR
    cout << k.weight << endl;           // 5
}
