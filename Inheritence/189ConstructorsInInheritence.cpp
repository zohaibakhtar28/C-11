#include <iostream>
using namespace std;
class Base
{
public:
    Base()
    {
        cout << "Non Paramertised of Base\n";
    }
    Base(int x)
    {
        cout << "Parameterised of Base" << x << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Non Parameterised of Derived\n";
    }
    Derived(int y)
    {
        cout << "Parameterised of Derived" << y << endl;
    }
    Derived(int x, int y) : Base(x) // Passing Base Class Parameterised Constructor from Derived class Parameterised Constructor
    {
        cout << "Parameterised of Derived" << y << endl;
    }
};
int main()
{
    Derived d; // Non Paramertised of Base
               // Non Parameterised of Derived

    Derived d1(10); // Non Paramertised of Base
                    // Parameterised of Derived10

    Derived d2(10, 5); // Parameterised of Base10
                       // Parameterised of Derived5

    return 0;
}