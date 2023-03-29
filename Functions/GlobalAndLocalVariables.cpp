#include<iostream>
using namespace std;
int g =0;
void fun()
{
    int a = 5; // a is local to fun and can't be used outside fun.
    g = g+a; //g is accesible in fun.
    cout<<g;
}
int main()
{
    int x = 10; //  x is local to main and can;t be used outside main
    g =15; // g is accessible in main.
    fun();
    g++; // g is accessible in main.
    cout<<g<<endl;
return 0;
}