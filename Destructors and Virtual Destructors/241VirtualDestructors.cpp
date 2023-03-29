#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Destructor of base\n";
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Destructor of Derived\n";
    }
};

void fun()
{
    Derived d;
    // Base Class Pointer Derived class object
    Base *p = new Derived();
    delete p; // Destructor of Base is Called only.

    //To make it call both we make destructor of Base Class as Virtual

}
int main()
{
    fun();
    // 1.) Destructor of derived
    // 2.) Destructor of base.

    fun();

    return 0;
}