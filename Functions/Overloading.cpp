#include <iostream>
using namespace std;
// Demonstrate Overloading of a function.
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
float sum(float a, float b)
{
    return a + b;
}
int main()
{

    cout << sum(10, 5, 15) << endl;

    cout << sum(1.3f, 1.5f);

    cout << sum(10, 5) << endl;
    return 0;
}