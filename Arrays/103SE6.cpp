#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter number of elements\n";
cin>>n;
float arr[100];
float sum = 0.0, average;
cout<<"Enter Elements\n";
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
for (int i = 0; i < n; i++)
{
    sum = sum + arr[i];
}

average = sum/n;
cout<<"Average is :"<<" "<<average<<endl;
return 0;
}