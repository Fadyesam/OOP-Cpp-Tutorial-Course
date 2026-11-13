# Section 5 — Inheritance

كل ملف داخل `src/` برنامج مستقل له `main` خاص به.

## التشغيل

```bash
g++ -std=c++17 src/04_device_laptop_public.cpp -o demo && ./demo
```

أو كل الملفات بـ CMake:

```bash
cmake -S . -B build
cmake --build build
```

## الملفات

| الملف | الفكرة |
|---|---|
| `01_vehicle_private_access.cpp` | الكلاس المشتق لا يصل إلى `private` في الأب مباشرة، لكنه يستخدم دوال `public` |
| `02_shape_rectangle_protected.cpp` | الوراثة بنمط `protected` |
| `03_librarybook_encapsulation.cpp` | لماذا نجعل البيانات `private` ونتحكم فيها بدوال |
| `04_device_laptop_public.cpp` | `Device` و`Laptop` بوراثة `public` وعضو `protected` |
| `05_laptop_protected.cpp` | `Laptop` بوراثة `protected` وإعادة إظهار الدالة كـ `public` |
| `06_temperature_thermostat.cpp` | `TemperatureSensor` و`SmartThermostat` مع getter/setter |
| `07_five_types_of_inheritance.cpp` | الأنواع الخمسة: Single, Multiple, Multilevel, Hierarchical, Hybrid |
| `08_visibility_modes.cpp` | أنماط الوراثة والنمط الافتراضي في `class` و`struct` |

### أمثلة الأسئلة الصعبة

| الملف | الفكرة |
|---|---|
| `hard1_ctor_dtor_order.cpp` | ترتيب Constructors و Destructors في سلسلة وراثة |
| `hard2_private_is_inherited.cpp` | الـ `private` موروث فعلًا لكنه غير متاح مباشرة (أثبتناها بـ `sizeof`) |
| `hard3_inheritance_chain.cpp` | سلسلة وراثة بأنماط مختلفة |
| `hard4_multiple_ambiguity.cpp` | الغموض في الوراثة المتعددة وحله بـ `::` |
| `hard5_temperature_fix.cpp` | خطأ خفي في `TemperatureSensor` (قيمة غير مهيّأة) وإصلاحه |
| `hard6_name_hiding.cpp` | إعادة تعريف دالة في الابن تخفي كل نسخ الأب بنفس الاسم |
