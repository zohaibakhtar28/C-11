#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter m and n\n";
    cin>>m>>n;

    while (m!=n)
    {
        if (m>n)
        {
            m = m-n;
        }
        else
            n = n-m;
        
    }
    cout<<"GCD :"<<m<<endl;
    
    return 0;
}
