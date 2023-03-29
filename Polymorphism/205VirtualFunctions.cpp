#include<iostream>
using namespace std;
class Base
{
    public:
    virtual void display()
    {
        cout<<"Display of Base\n";
    }   
};    

class Derived : public Base
{
    public :
    void display() //Overriding Display Functions for Derived Class
    {
        cout<<"Display of Derived\n";
    }
};  
int main()
{
    Base *p = NULL;
 Derived d;
 p = &d;
 p->display(); // Without virtual the O/P : Display of Base
 /*
by default the fxn call is based on pointer and not the object it
is pointing which is philosphically wrong
 */
return 0;
}