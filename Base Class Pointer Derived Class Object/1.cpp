#include<iostream>
using namespace std;
class Base
{
    public :
    void fun1()
    {
        cout<<"Fun 1 of Base\n";
    }
};

class Derived : public Base
{
    public :
    void fun2()
    {
        cout<<"Fun2 of Derived\n";
    }
};
int main()
{
    Base *ptr;
    Derived d;
    ptr = &d; // Base Class Pointer pointing to object of Derived Class.
    ptr->fun1();
   //  ptr->fun2(); //Not possible.

    // Base Class pointer cannot point to functions of Derived Class

    Base b;
    Derived *ptr;
    ptr = &b; //Not possible
    //Derived Class Pointer cannot point to Base Class Object
return 0;
}