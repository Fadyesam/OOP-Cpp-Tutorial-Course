#include <iostream>
#include "Student.h"
int main() {
    Student s;
    s.setId(9);
    std::cout << s.getId() << std::endl;   // 9
}
