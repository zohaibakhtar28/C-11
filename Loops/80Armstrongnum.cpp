#include<iostream>
using namespace std;
int main()
{
    int n,sum = 0,r,n1;
    cout<<"Enter n\n";
    cin>>n;
    n1 = n;
    while (n > 0)
    {
        r = n%10;
        sum = sum + r*r*r;
        n = n/10; 
    }
    if (sum == n1)
    {
        cout<<"Armstrong Number\n";
    }
    else cout<<"Not Armstrong\n";
    
    
    return 0;
}
