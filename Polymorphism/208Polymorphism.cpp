#include<iostream>
using namespace std;

class Car
{
    public:
    /*void start()
    {
        cout<<"Car Started\n";
    }*/

    virtual void start() = 0; //True Virtual Function to Achieve Run Time Polymorphism by Overriding in derived classes.
};

class Innova : public Car
{
    void start()
    {
        cout<<"Innova Started\n"; //Overriding start() for Innova
    }
};

class Swift : public Car
{
    void start()
    {
        cout<<"Swift Started\n"; //Overriding start() for Swift
    }
};
int main()
{
Car *p = new Innova();
p->start();
p = new Swift;
p->start();
return 0;
}