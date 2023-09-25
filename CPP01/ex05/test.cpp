#include <iostream>

// Define a class with methods
class MyClass {
public:
    void method1() {
        std::cout << "Method 1 called" << std::endl;
    }

    void method2() {
        std::cout << "Method 2 called" << std::endl;
    }
};

int main() {
    // Create an instance of MyClass
    MyClass myObject;

    // Define an array of function pointers with the same signature as the methods
    void (MyClass::*functionPointers[])() = { &MyClass::method1, &MyClass::method2 };

    // Call the methods through the function pointers
    (myObject.*functionPointers[0])(); // Calls method1
    (myObject.*functionPointers[1])(); // Calls method2

    return 0;
}

