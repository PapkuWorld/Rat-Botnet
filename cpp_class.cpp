// cpp_class.cpp
#include <iostream>

extern "C" {
    class MyClass {
    public:
        MyClass() {
            std::cout << "Hello, World!" << std::endl;
        }
        void setValue(int v) { value = v; }
        int getValue() const { return value; }
        void printValue() const { std::cout << "Value: " << value << std::endl; }
    private:
        int value;
    };
    
    MyClass* MyClass_new() { return new MyClass(); }
    void MyClass_delete(MyClass* obj) { delete obj; }
    void MyClass_setValue(MyClass* obj, int value) { obj->setValue(value); }
    int MyClass_getValue(MyClass* obj) { return obj->getValue(); }
    void MyClass_printValue(MyClass* obj) { obj->printValue(); }
}
