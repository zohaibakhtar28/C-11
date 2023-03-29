#include<iostream>
using namespace std;
void fun()
{
    static int v = 0; // Retains its value throughout the program but local to fun.
    int a = 5; //Local to fun
    v++;
    cout<<a<<" "<<v;
}
int main()
{
    fun();
    fun();
    fun();
return 0;
}