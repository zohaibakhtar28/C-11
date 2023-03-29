#include<iostream>
using namespace std;
class Rectangle
{
    public :
    int length;
    int breadth;

    int area()
    {
        return length*breadth;
    }

    int perimeter()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    Rectangle r;
    Rectangle *p;
    p = &r;         //Pointer pointing to object r which is in stack;

    p->length = 10;
    p->breadth = 5;
    cout<<p->area()<<endl;


    Rectangle *q = new Rectangle(); // Created an object in heap named q;
    q->length = 10;
    q->breadth = 12;
    cout<<q->area()<<endl;

return 0;
}