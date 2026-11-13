// سؤال صعب 4: الغموض (Ambiguity) في الوراثة المتعددة
#include <iostream>
using namespace std;

class Printer { public: void start() { cout << "Printer starts" << endl; } };
class Scanner { public: void start() { cout << "Scanner starts" << endl; } };

class Copier : public Printer, public Scanner {};

class SmartCopier : public Printer, public Scanner {
public:
    void start() {                      // نحل الغموض بتعريف الدالة في الابن
        Printer::start();
        Scanner::start();
    }
};

int main() {
    Copier c;
    // c.start();                       // خطأ: ambiguous (أي start؟)
    c.Printer::start();                 // نحدد الأب بـ ::
    c.Scanner::start();
    SmartCopier s;
    s.start();
    return 0;
}
