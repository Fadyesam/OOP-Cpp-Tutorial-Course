#include <iostream>
using namespace std;

class Student {
    int id = 0;               // private by default
public:
    void setId(int v) { id = v; }
    int getId() const { return id; }
};

struct Point {
    int x = 1;                // public by default
};

int main() {
    Student s;
    s.setId(7);
    // s.id = 5;              // ERROR
    Point p;
    cout << s.getId() << " " << p.x << endl;   // 7 1
}
