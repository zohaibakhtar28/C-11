#include<iostream>
using namespace std;
class Rectangle
{
    private  :
    int len;
    int br;
    public   :
    Rectangle();
    Rectangle(int l, int b);
    Rectangle(Rectangle &r);
    int getLength(){return len;} //Inline Functions
    int  getBreadth(){return br;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();  //Enquiry
    ~Rectangle();       // Destructor
};
int main()
{
    Rectangle r1(10,10);
    cout<<r1.area()<<endl;
    if(r1.isSquare())
    cout<<"Yes\n";
return 0;
}

Rectangle::Rectangle(int l, int b)
{
    len = l;
    br = b;
}
Rectangle::Rectangle(Rectangle &r)
{
    len = r.len;
    br = r.br;
}
void Rectangle::setLength(int l)
{
    len = l;
}
void Rectangle::setBreadth(int b)
{
    br = b;
}
int Rectangle::area()
{
    return len*br;
}
int Rectangle::perimeter()
{
    return 2*(len+br);
}
bool Rectangle::isSquare()
{
    return len == br;
}
Rectangle::~Rectangle()
{
    cout<<"Rectangle is Destroyed\n";
}