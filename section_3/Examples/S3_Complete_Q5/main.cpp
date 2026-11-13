#include <iostream>
using namespace std;

class Light {
    bool on = false;
public:
    void setOn(bool v) { on = v; }      // mutator
    bool isOn() const { return on; }
};

int main() {
    Light l;
    l.setOn(true);
    cout << l.isOn() << endl;           // 1
}
