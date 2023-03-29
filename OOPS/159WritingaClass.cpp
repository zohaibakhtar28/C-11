#include<iostream>
using namespace std;

class Rectangle
{   public :
    int length; // data members
    int breadth;

   int area() // functions
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
    Rectangle r1,r2;// object of class rectangle

return 0;
}