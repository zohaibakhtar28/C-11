#include<iostream>
using namespace std;
class Rectangle
{
    private:
    int length;
    int breadth;
    public :
    Rectangle(int length, int breadth)
    {
        this->length = length; //This pointer is used to point to members of a curent object and to avoid ambiguity between constructor variable names. 
        this->breadth = breadth;
    }
};   
int main()
{

return 0;
}