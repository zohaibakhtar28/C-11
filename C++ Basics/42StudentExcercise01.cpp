#include<stdio.h>
#include<iostream>
using namespace std;
typedef float radius;
typedef float area;
int main()
{
    radius r;
    area a;
    cout<<"Enter Radius"<<endl;
    cin>>r;
    a = 3.14*r*r;
    cout<<"Area is :"<<" "<<a;        

    return 0;
}

