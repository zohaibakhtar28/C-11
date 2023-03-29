#include <iostream>
using namespace std;

class Base
{
public:
    int a;
    void display()
    {
        cout << "Display of Base" <<a<<" "<< endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of Derived" << endl;
    }
};
int main()
{
    Base b;
    b.display();
    Derived d;
    d.display(); // We can access functions of base class from derived class as dervied class is inheriting from base.
    d.show();
    d.a = 100; //Derived can access public data member of Base Class
    d.display();

    return 0;
}