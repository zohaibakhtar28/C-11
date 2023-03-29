#include<iostream>
using namespace std;
class Rectangle
{
    private :
    int length;
    int breadth;

    public :
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }
    void setLength(int l)
    {
        if (length>=0)
        {
            length = l;
        }
        else
        {
            cout<<"Length Can't be negative. Set to Default\n";
            length = 0;
        }
    }
    void setBreadth(int b)
    {
        if (breadth>=0)
        {
            breadth = b;
        }
        else
        {
            cout<<"Breadth Can't be negative. Set to Default\n";
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
    Rectangle r;
    r.setLength(10);
    r.setBreadth(5);
    cout<<r.getBreadth();
    cout<<r.getLength();
    cout<<r.area();
    cout<<r.perimeter();
return 0;
}