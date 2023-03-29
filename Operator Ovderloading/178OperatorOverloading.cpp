#include <iostream>
using namespace std;
// Complex Number Addition

class Complex
{
public:
    int real;
    int imaginary;

    // public:
    Complex add(Complex x) // c2 is passed as x
    {
        Complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp;
    }

    Complex operator+(Complex x) // Operator Overloading
    {
        Complex temp;
        temp.real = real + x.real;
        temp.imaginary = imaginary + x.imaginary;
        return temp;
    }
};
int main()
{
    Complex c1, c2, c3;
    c1.real = 5;
    c1.imaginary = 3;
    c2.real = 10;
    c2.imaginary = 5;

    c3 = c1.add(c2);
    // after overloading we can write c3 = c1+c2;
    cout << c3.real << "+i" << c3.imaginary << endl;

    return 0;
}