#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 nos."<<endl;
    cin>>a>>b>>c;

    cout<<"Greatest is :-"<<endl;
    if (a>b && a>c)
    {
        cout<<a;
    }
    else if (b>c)
    {
        cout<<b;
    }
    else
        cout<<c;
    return 0;
}

