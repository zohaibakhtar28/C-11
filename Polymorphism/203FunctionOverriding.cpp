#include<iostream>
using namespace std;
class Base
{
    public:
    void display()
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
 Derived d;
 d.display();
return 0;
}