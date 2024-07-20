// main.c
#include <stdio.h>
#include "cpp_class.h"

int main() {
    MyClass* obj = MyClass_new();
    
    MyClass_setValue(obj, 42);
    printf("Value from C: %d\n", MyClass_getValue(obj));
    MyClass_printValue(obj);
    
    MyClass_delete(obj);
    return 0;
}
