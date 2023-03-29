#include<iostream>
using namespace std;
int &fun(int &x)
{
    cout<<x<<endl;
    
    return x;
}
int main()
{
int a = 5;
fun(a);

fun(a) = 25; //Fun acts as a reference.
cout<<a<<endl;
return 0;
}