#include <iostream>
using namespace std;

class Rational
{
private:
    int num;
    int denom;

public:
    Rational(int p = 0, int q = 0)
    {
        this->num = p;
        this->denom = q;
    }
    void setNumerator(int a)
    {
        this->num = a;
    }
    void setDenominator(int b)
    {
        this->denom = b;
    }
    Rational operator+(Rational x)
    {
        Rational temp;
        temp.num = num + x.num;
        temp.denom = denom + x.denom;
        return temp;
    }
    friend ostream & operator<<(ostream &op, Rational &c);
};

ostream &operator<<(ostream &op, Rational &c)
{
    cout << c.num << "/" << c.denom;
}

int main()
{
    Rational r1(10, 5);
    Rational r2(4, 6);
    Rational r3;
    r3 = r3 + r1;
    //r3 = r1.operator+(r2); Another Way.
    cout << "Sum of :" << r1 << " "
         << "and"
         << " " << r2 << " "
         << "is"
         << " " << r3;
    return 0;
}