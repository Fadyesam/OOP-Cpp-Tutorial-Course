// سؤال صعب 6: إعادة تعريف دالة في الابن تُخفي كل نسخ الأب بنفس الاسم
#include <iostream>
using namespace std;

class Animal {
public:
    void speak() { cout << "Animal sound" << endl; }
    void speak(int times) {
        for (int i = 0; i < times; i++) cout << "Animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    void speak() { cout << "Woof" << endl; }   // تُخفي speak() و speak(int) معًا
};

int main() {
    Dog d;
    d.speak();                // Woof
    // d.speak(2);            // خطأ: speak(int) أصبحت مخفية
    d.Animal::speak(2);       // الحل: نحدد الأب صراحة
    Animal* p = &d;
    p->speak();               // Animal sound (الدالة ليست virtual)
    return 0;
}
