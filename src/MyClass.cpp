#include "MyClass.hpp"
#include <iostream>

MyClass::MyClass()
{
    std::cout << "MyClass " << std::endl;
}

int MyClass::foo(int a)
{
    return 2*a;
}
