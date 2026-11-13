#include <iostream>
using namespace std;

class Square {
    int side;
public:
    Square(int s) : side(s) {}
    int area() const { return side * side; }   // defined inside the class => inline
    int perimeter() const;
};

inline int Square::perimeter() const { return 4 * side; }   // explicit inline

int main() {
    Square s(5);
    cout << s.area() << " " << s.perimeter() << endl;   // 25 20
}
