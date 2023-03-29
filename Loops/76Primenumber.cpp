#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n";
    cin>>n;
    int flag = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            flag++;
        }
        
    }
    
    if (flag == 2)
    {
        cout<<"Prime Number\n";
    }
    else cout<<"Not a Prime Number\n";

    
    return 0;
}
