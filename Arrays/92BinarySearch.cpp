#include<iostream>
using namespace std;
int main()
{
int a[10] = {6,8,13,17,20,22,25,28,30,35};
int l = 0;
int h = 9;
int mid;
int key;
cout<<"Enter key\n";
cin>>key;
while (l<=h)
{
    mid = (l+h)/2;
    if ( key == a[mid] )
    {
        cout<<"Key found at :"<<" "<<mid<<endl;
        return 0;
    }
    else if (key<a[mid])
    {
        h = mid - 1;
    }
    else
        l = mid + 1;
}

cout<<"Key Not Found\n";
return 0;
}