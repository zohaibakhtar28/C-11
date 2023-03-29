#include<iostream>
using namespace std;

class MyException : public exception
{
    /*public :
    char *what()
    {
        return "MyException";
    }
    */
};

int division(int x, int y)throw(MyException)
{
    if (y == 0)
    {
        MyException m;
        throw m;
    }
    return x/y;
    
}
int main()
{

int a = 10, b = 0;
int z;
try
{
    z  = division(a,b);
    cout<<z;
}
catch(MyException)
{
    cout<<"Division By Zero\n";
}
cout<<"Program Ended\n";

return 0;
}