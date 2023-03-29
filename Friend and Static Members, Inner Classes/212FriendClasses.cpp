#include<iostream>
using namespace std;
class Your;
// Necessary to declare here before mentioning as a friend class


class My
{
    private : int a;
    protected : int b;
    public : int c;

    friend Your; // Your Class is declared as a friend class of My Class
};

class Your
{
    public:
    My m;
    void fun()
    {
    m.a = 10;
    m.b = 15;
    m.c = 20;
    }
};

int main()
{

return 0;
}