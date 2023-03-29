#include <iostream>
using namespace std;
// Demonstrate Default Argument by creating a simgle function 'sum' for both 2 and 3 ints.
int sum(int a, int b, int c = 0)
{
    return a + b + c;
}
int main()
{
    cout << sum(2, 5) << endl;
    cout << sum(2, 5, 7) << endl;
    return 0;
}