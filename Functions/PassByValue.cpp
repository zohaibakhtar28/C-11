#include <iostream>
using namespace std;
// Demonstrate Parameter Passing by Value using swap function.
void swap(int a, int b)
{
    cout << "Before Swap in Swap Fxn :"
         << " " << a << " " << b << endl;
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "After Swap in Swap Fxn : a = "
         << " " << a << " "
         << " b = " << b << endl;
}
int main()
{
    int a = 10, b = 15;
    cout << "Before Swap in Main Fxn :"
         << " " << a << " " << b << endl;
    swap(a, b);
    cout << "After Swap in Main Fxn :"
         << " " << a << " " << b << endl;
    return 0;
}