#include<iostream>
using namespace std;
class Complex
{
    private :
    int real;
    int imaginary;

    public:
    Complex(int r=0, int i=0)
    {
        real = r;
        imaginary = i;
    }
    friend ostream & operator<<(ostream &o, Complex &c1);
};

ostream & operator<<(ostream &o, Complex &c1)
{
    cout<<c1.real<<"+i"<<c1.imaginary<<endl;
    return o;
}
int main()
{
Complex c1(10,8);
cout<<c1;

return 0;
}