#include<iostream>
using namespace std;

class Test
{
    public :
    int a;
    static int count; //static data member
    Test()
    {
        a = 10;
        count++;
    }
    static int getCount() // static member function
    {
        // a = 10; can't access non static data members
        return count;

    }
};

int Test::count = 0;


int main()
{
    Test t1;
    Test t2;
     cout<<t1.count<<endl;
     cout<<t2.count<<endl;
     cout<<Test::count<<endl;

// Count is accessed by both the objects
    t1.count =25;
    cout<<t2.count<<endl;

// Accessing static data member using static member function.
cout<<Test::getCount()<<endl;

return 0;
}