// Section 4 - Q1 (بعد التصحيح): الوصول إلى private عبر دالة public
#include <iostream>
using namespace std;

class Parent {
private:
    int score = 90;
public:
    int getScore() const { return score; }    // الحل: getter عام
    // الحل البديل: اجعل score محميًا (protected) بدل private
};

class Child : public Parent {
public:
    void show() {
        cout << getScore() << endl;           // بدل cout << score
    }
};

int main() {
    Child c;
    c.show();
    return 0;
}
