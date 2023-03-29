#include<iostream>
using namespace std;

class Outer
{
    public :
    int a = 10;
    static int b;
    void fun()
    {
        i.show();
        //Outer class can access data members and functions of inner classes upon an object of an Inner Class.
    }

    class Inner
    {
        public:
        int x = 20;
        void show()
        {
            cout<<b<<endl;
            //Inner Class can access statict data members of outer class

        }
    };

    Inner i;
};

int Outer :: b = 5;
int main()
{
    Outer::Inner i;
    //Inner class object can be created directly using scope resolution .
return 0;
}