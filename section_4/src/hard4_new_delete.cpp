// سؤال صعب 4: الكائنات الديناميكية (new / delete) لا تُدمَّر تلقائيًا
#include <iostream>
#include <string>
using namespace std;

class Test {
public:
    string name;
    Test(string n) {
        name = n;
        cout << "Create " << name << endl;
    }
    ~Test() {
        cout << "Destroy " << name << endl;
    }
};

int main() {
    Test* p = new Test("Heap1");  // Constructor يُنادى عند new
    Test local("Stack");        // كائن عادي (Stack)
    delete p;                   // Destructor لـ Heap1 يُنادى هنا يدويًا
    Test* q = new Test("Leak");  // بدون delete => لا Destructor (Memory Leak)
    (void)q;                    // لإخفاء تحذير المتغير غير المستخدم
    return 0;                   // يُدمَّر Stack فقط
}
