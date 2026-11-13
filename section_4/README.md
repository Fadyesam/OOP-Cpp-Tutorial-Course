# Section 4 — Constructors & Destructors

كل ملف داخل `src/` برنامج مستقل له `main` خاص به.

## التشغيل

ملف واحد:

```bash
g++ -std=c++17 src/01_test_constructor_destructor.cpp -o demo && ./demo
```

كل الملفات مرة واحدة بـ CMake:

```bash
cmake -S . -B build
cmake --build build
```

## الملفات

| الملف | الفكرة |
|---|---|
| `01_test_constructor_destructor.cpp` | استدعاء الـ Constructor والـ Destructor تلقائيًا |
| `02_employee_overloading.cpp` | أكثر من Constructor في الكلاس (Default + Parameterized) |
| `03_student_destructor_order.cpp` | ترتيب التدمير عكس ترتيب الإنشاء |
| `04_problem1_car.cpp` | كلاس `Car`: Default و Parameterized Constructor |
| `05_problem2_book.cpp` | كلاس `Book`: Constructor + Destructor |
| `06_problem3_person.cpp` | ثلاثة كائنات وترتيب التدمير |
| `07_problem4_product.cpp` | كلاس `Product` بالثلاثة معًا |
| `08_copy_constructor.cpp` | الـ Copy Constructor: `Student s2 = s1;` |

### أمثلة الأسئلة الصعبة

| الملف | الفكرة |
|---|---|
| `hard1_no_default_constructor.cpp` | لماذا يفشل `Car c;` عندما نعرّف Constructor واحدًا بباراميتر فقط، وكيف نحلها |
| `hard2_scope_order.cpp` | الـ Destructor عند نهاية الأقواس `{ }` وليس نهاية `main` |
| `hard3_copy_by_value.cpp` | تمرير الكائن بالقيمة يستدعي الـ Copy Constructor |
| `hard4_new_delete.cpp` | كائنات `new` لا تُدمَّر إلا بـ `delete` (يحتوي memory leak **مقصودًا**) |
| `hard5_vexing_parse.cpp` | الفخ: `Car c1();` هو تصريح دالة وليس كائنًا (قد يظهر تحذير مقصود) |
