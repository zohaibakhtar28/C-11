#include <iostream>
using namespace std;


int division(int, int);
int main()
{
    int x = 10, y = 0, z;
    try
    {
        if (y == 0)
       z = division(x,y);
        cout << z << endl;
    }

    catch (int e)
    {
        cout << "Division by Zero, Exception Code :" << e << endl;
    }

    cout<<"Program Ended\n";
    return 0;
}

int division(int a, int b)
{
    if (b==0)
    {
        throw 1;
    }
    return
        a/b;
    
}