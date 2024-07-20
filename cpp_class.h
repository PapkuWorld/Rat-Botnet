// cpp_class.h

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MyClass MyClass;

MyClass* MyClass_new();
void MyClass_delete(MyClass* obj);
void MyClass_setValue(MyClass* obj, int value);
int MyClass_getValue(MyClass* obj);
void MyClass_printValue(MyClass* obj);

#ifdef __cplusplus
}
#endif
