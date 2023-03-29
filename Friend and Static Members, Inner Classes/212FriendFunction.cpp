#include<iostream>
using namespace std;
class Test
{
    private :int a;
    protected : int b;
    public : int c;
    friend void fun(); //fun() is declared as friend fxn for class Test.
};

void fun()
{
    //fun() can now access all memebers of Test upon an object
    Test t;
    t.a = 10;
    t.b = 15;
    t.c = 20;
}
int main()
{

return 0;
}