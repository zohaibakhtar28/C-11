#include<iostream>
using namespace std;
int main()
{
    int n,fact =1;
    cout<<"Enter any number\n";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }
    cout<<"Factorial is :"<<fact;
    return 0;
}
