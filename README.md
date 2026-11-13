# OOP with C++ — Tutorial Course Examples

أمثلة عملية كاملة لشرح أساسيات **البرمجة الكائنية (Object-Oriented Programming)** بلغة **C++**،
موجّهة لطلبة الفرقة الثانية – كلية الحاسبات. كل مثال برنامج صغير يعمل بمفرده، وعليه تعليقات توضح الفكرة والناتج المتوقع.

## المحتويات

| القسم | الموضوع | أهم المفاهيم |
|---|---|---|
| [`section_1`](section_1) | أساسيات الـ Class والـ Object | `class`، `attributes`، `methods`، `public` و`private` |
| [`section_3`](section_3) | الـ Encapsulation وتنظيم الكلاس | `getters/setters`، `const`، عامل `::`، `inline`، فصل `.h` عن `.cpp`، تمرين Matching |
| [`section_4`](section_4) | Constructors & Destructors | `Default` و`Parameterized` و`Copy Constructor`، ترتيب التدمير، `new/delete` |
| [`section_5`](section_5) | الوراثة Inheritance | أنماط الوراثة `public/protected/private`، الأنواع الخمسة، ترتيب الإنشاء والتدمير |
| [`section_6`](section_6) | الوراثة (تكملة) | الوراثة المتعددة، الـ `Ambiguity`، مشكلة الماسة `Diamond`، `virtual inheritance` |

> سيتم إضافة بقية الأقسام تباعًا مع تقدم المقرر.

كل قسم فيه ملف `README.md` خاص به يشرح كل مثال في سطر واحد.

## المتطلبات

- مترجم **g++** يدعم C++17 (مثلًا MinGW-w64 / MSYS2 على Windows، أو `build-essential` على Linux، أو Xcode Command Line Tools على macOS).
- اختياري: **VS Code** مع إضافة *C/C++*، و**CMake** لبناء الأقسام 4 و5 و6 دفعة واحدة.

للتأكد من أن المترجم جاهز:

```bash
g++ --version
```

## طريقة التشغيل

**1) ملف واحد (الأغلب):**

```bash
g++ -std=c++17 -Wall -Wextra section_1/class.cpp -o class_demo
./class_demo            # على Windows: class_demo.exe
```

**2) مشروع من عدة ملفات** (مثل `section_3/Circle_Project`): نترجم كل ملفات `.cpp` معًا:

```bash
cd section_3/Circle_Project
g++ -std=c++17 main.cpp Circle.cpp -o circle_app
./circle_app
```

**3) من VS Code:** افتح الملف واضغط `Ctrl+Shift+B` (الإعداد جاهز في `.vscode/tasks.json`)، ثم شغّل الملف الناتج `.exe` من الـ Terminal. هذا الأمر يترجم **ملفًا واحدًا** فقط، ولمشاريع الملفات المتعددة استخدم الطريقة (2).

**4) CMake (الأقسام 4 و5 و6):** كل ملف داخل `src/` يتحول إلى برنامج مستقل:

```bash
cd section_4
cmake -S . -B build
cmake --build build
```

**5) اختبار كل الأمثلة مرة واحدة:**

```bash
bash scripts/build_all.sh
```

## نصيحة للمذاكرة

1. اقرأ الكود **قبل** تشغيله، واكتب بنفسك الناتج المتوقع.
2. شغّله وقارن بالناتج، وبالتعليق المكتوب بجانب الأسطر.
3. أزل علامة `//` من الأسطر التي عليها كلمة `ERROR` أو `خطأ` لترى رسالة الخطأ بنفسك، فهذه الأخطاء مكتوبة كتعليقات عن قصد للتعلم.
4. عدّل في الكود وجرّب (غيّر القيم، احذف كلمة `virtual`، غيّر نمط الوراثة...) ولاحظ ماذا يحدث.

## ملاحظات

- **الترميز (Encoding):** الملفات بصيغة **UTF-8** وفيها تعليقات عربية. لو ظهرت التعليقات بشكل غريب غيّر ترميز المحرر إلى UTF-8. ومع Visual Studio (MSVC) أضف الخيار `/utf-8` (موجود تلقائيًا في ملفات CMake هنا).
- بعض الأمثلة (مثل `hard4_multiple_ctor_order.cpp` و`hard5_vexing_parse.cpp`) قد تعرض **تحذيرات (warnings)** عند الترجمة، وهي مقصودة لأن المثال يشرح هذه النقطة.
- المثال `section_4/src/hard4_new_delete.cpp` يحتوي **تسرب ذاكرة (memory leak)** مقصودًا للشرح.

## المساهمة والإبلاغ عن الأخطاء

لو وجدت خطأ في كود أو شرح، افتح **Issue** في المستودع واذكر اسم الملف ورقم السطر.

## هيكل المستودع

```
.
├── section_1/            # Classes & Objects
├── section_3/            # Encapsulation, const, header/implementation split
│   ├── Circle_Project/
│   └── Examples/
├── section_4/            # Constructors & Destructors  (+ CMakeLists.txt)
├── section_5/            # Inheritance                 (+ CMakeLists.txt)
├── section_6/            # Inheritance (cont.)         (+ CMakeLists.txt)
├── scripts/build_all.sh  # build + run all examples
└── .github/workflows/    # automatic check on every push
```
## By Eng<Fady Esam>