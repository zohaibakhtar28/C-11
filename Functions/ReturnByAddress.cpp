#include<iostream>
using namespace std;
int *fun(int size)
{
    int *p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = 5*i;
    }
    
    cout<<"Address of P in fun : "<<p<<endl;
    return p;
}
int main()
{
int *ptr = fun(5);
cout<<"Address of ptr in main : "<<ptr<<endl; //Demonstrates that p and ptr points to same location in heap
for (int i = 0; i <5; i++)
{
    cout<<ptr[i]<<endl;
}


return 0;
}