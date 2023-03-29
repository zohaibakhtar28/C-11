#include<iostream>
#include<memory>
using namespace std;
class Rectangle
{
    int length;
    int breadth;

    public :
    Rectangle(int l, int b)
    {
    length = l;
    breadth = b;
    }

    int area()
    {
        return length*breadth;
    }
};


int main()
{
    // UNIQUE POINTERS...
    unique_ptr<Rectangle> ptr(new Rectangle(10,5));
    cout<<ptr->area()<<endl;

    unique_ptr<Rectangle> ptr2;
    // ptr2= ptr is not allowed as two unique pointers can't point on same object
    ptr2 = move(ptr); //This moves ptr to null and ptr2 now points on location of ptr

    cout<<ptr2->area()<<endl;
    cout<<ptr->area()<<endl; //Not allowed as ptr now points on NULL.
//..........................................................................
    // SHARED POINTERS...
    shared_ptr<Rectangle> ptr3(new Rectangle(10,5));
    shared_ptr<Rectangle> ptr4;
    ptr4 = ptr3; // Both points on same object.
    cout<<ptr3->area();
    cout<<ptr4->area();

    cout<<ptr3.use_count()<<endl; // Gives count of no of ptrs pointing on same object.
//..........................................................................


return 0;
}