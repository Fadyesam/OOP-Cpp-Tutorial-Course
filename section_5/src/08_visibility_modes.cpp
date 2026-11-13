// أنماط الوراثة الثلاثة (public / protected / private) والنمط الافتراضي
#include <iostream>
using namespace std;

class Base {
public:    int pub = 1;
protected: int prot = 2;
private:   int priv = 3;
public:    int getPriv() const { return priv; }   // وصول غير مباشر للـ private
};

class PubD : public Base {                 // pub->public, prot->protected
public:
    void show() { cout << "PubD: " << pub << " " << prot << endl; }
};
class ProtD : protected Base {             // pub,prot -> protected
public:
    void show() { cout << "ProtD: " << pub << " " << prot << endl; }
};
class PrivD : private Base {               // pub,prot -> private
public:
    void show() { cout << "PrivD: " << pub << " " << prot << " " << getPriv() << endl; }
};
class DefaultD : Base {                    // بدون نمط في class => private
public:
    void show() { cout << "DefaultD: " << pub << endl; }
};
struct DefaultS : Base {};                 // بدون نمط في struct => public

int main() {
    PubD a;   a.pub = 10;  a.show();       // pub public: يمكن الوصول من main
    ProtD b;  b.show();                    // b.pub خطأ
    PrivD c;  c.show();                    // c.pub خطأ
    DefaultD d; d.show();                  // d.pub خطأ
    DefaultS s; cout << "struct: " << s.pub << endl;   // سليم
    return 0;
}
