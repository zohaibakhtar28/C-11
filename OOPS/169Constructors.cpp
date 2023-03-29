#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle() // Default Constructor
    {
        length = 1;
        breadth = 1;
    }
    Rectangle(int l, int b) // Parameteised Constructor
    {
        setLength(l);
        setBreadth(b);
    }
    // We can omit default constructor by giving default values in parameterised constructor
    /*Rectangle(int l = 1, int b =1) 
    {
        setLength(l);
        setBreadth(b);
    }
    */
    Rectangle(Rectangle &r) // Copy Constructor
    {
        length = r.length;
        breadth = r.breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
    void setLength(int l)
    {
        if (length >= 0)
        {
            length = l;
        }
        else
        {
            cout << "Length Can't be negative. Set to Default\n";
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (breadth >= 0)
        {
            breadth = b;
        }
        else
        {
            cout << "Breadth Can't be negative. Set to Default\n";
            breadth = 0;
        }
    }

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
};
int main()
{
    Rectangle r;         // Goes to default constructor which sets both l and b as 0
    Rectangle r1(10, 5); // Goes to parameterised constructor
    Rectangle r2(r1);    // r2 object is created which has the same parameter as r1 (through copy constructor)

    return 0;
}