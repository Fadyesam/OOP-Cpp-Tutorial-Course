# Section 6 — Inheritance (continued)

كل ملف داخل `src/` برنامج مستقل له `main` خاص به.

## التشغيل

```bash
g++ -std=c++17 src/10_teaching_assistant.cpp -o demo && ./demo
```

أو كل الملفات بـ CMake:

```bash
cmake -S . -B build
cmake --build build
```

## الملفات

| الملف | الفكرة |
|---|---|
| `01_vehicle_car.cpp` | الابن يستخدم أعضاء الأب `public` |
| `02_multilevel_abc.cpp` | Multilevel: `A` ← `B` ← `C` |
| `03_camera_gps_scope.cpp` | حل الغموض بعامل النطاق `::` |
| `04_counter_private.cpp` | بيانات `private` ودوال `public` للتعامل معها |
| `05_fix_private_score.cpp` | تصحيح: الوصول إلى `private` عبر getter |
| `06_fix_protected_balance.cpp` | تصحيح: `protected` لا يُرى من `main` |
| `07_fix_ambiguous_print.cpp` | تصحيح: غموض `print()` بين أبوين (حلّان) |
| `08_fix_inheritance_syntax.cpp` | تصحيح: صيغة الوراثة `class Manager : public Employee` |
| `09_fix_diamond_id.cpp` | تصحيح: مشكلة الماسة (`B::id` أو `virtual`) |
| `10_teaching_assistant.cpp` | الوراثة المتعددة: `TeachingAssistant` من `Student` و`Employee` |

### أمثلة الأسئلة الصعبة

| الملف | الفكرة |
|---|---|
| `hard1_protected_other_object.cpp` | الوصول إلى `protected` عبر كائن من نوع الأب غير مسموح |
| `hard2_diamond_constructors.cpp` | كم مرة يُنشأ الجد في الماسة (بدون `virtual` ومعها) |
| `hard3_ambiguity_different_signatures.cpp` | الغموض يحدث حتى لو اختلفت الباراميترات، والحل `using` |
| `hard4_multiple_ctor_order.cpp` | ترتيب الإنشاء يتبع ترتيب تعريف الآباء (قد يظهر تحذير `-Wreorder` مقصود) |
| `hard5_private_using.cpp` | وراثة `private` مع `using` لإظهار دالة واحدة |
| `hard6_object_slicing.cpp` | قص الكائن عند نسخ الابن إلى كائن أب |
