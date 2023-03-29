#include <iostream>
#include <stdlib.h>
using namespace std;

class Demo
{
public:
    int *p;
    Demo()
    {
        p = new int[10];
        cout << "Constructor of Demo\n";
    }

    ~Demo()
    {
        delete[] p;
        // Whenever we allocate dynamically in a class
        // it has to be deleted in destructor explicitlly.

        cout << "Destructor of Demo\n";
    }
};

void fun()
{
    Demo d;
}

void fun2()
{
    Demo *ptr = new Demo();
    // On calling only constructor will be called.
    // objects created in heap has to be explicitly deleted to call the destructor
    delete ptr;
}
int main()
{
    fun();
    // On calling object is created and on returning object is destroyed
    // so we'll get both the messages.

    fun2();
    return 0;
}