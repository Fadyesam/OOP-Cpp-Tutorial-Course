// سؤال صعب 2: الـ Destructor مع الأقواس { } (Scope)
#include <iostream>
#include <string>
using namespace std;

class Item {
public:
    string name;
    Item(string n) {
        name = n;
        cout << "Create " << name << endl;
    }
    ~Item() {
        cout << "Destroy " << name << endl;
    }
};

int main() {
    Item a("A");
    {                           // بداية Block داخلي
        Item b("B");
        Item c("C");
        cout << "Inside block" << endl;
    }                           // هنا يُدمَّر C ثم B فورًا
    Item d("D");
    cout << "End of main" << endl;
    return 0;                   // ثم يُدمَّر D ثم A
}
