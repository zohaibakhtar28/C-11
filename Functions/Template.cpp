#include <iostream>
using namespace std;
// Demonstrate Template Function for Sum of Ints and Floats.
template <class T>
T sum(T a, T b)
{
    return a + b;
}
int main()
{
    cout << sum(2, 5) << endl;
    cout << sum(2.5f, 3.5f);
    return 0;
}