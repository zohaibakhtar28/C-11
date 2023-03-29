#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, r1, r2;
    cout << "Enter a,b and c\n";
    cin >> a >> b >> c;
    r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    cout << "The roots are :\n";
    cout << r1 << endl;
    cout << r2 << endl;
    return 0;
}
