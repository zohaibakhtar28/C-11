#include<iostream>
using namespace std;
int main()
{
   int n,sum = 0;
   cout<<"Enter n\n";
   cin>>n;

   // cout<<"Factors of "<<n<<"are :-"<<endl;
   for (int i = 1; i <= n; i++)
   {
    if (n%i == 0)
    {
        sum = sum + i;
    }
    
   } 
    if (sum == 2*n)
    {
        cout<<"Perfect Number\n";
    }
    else cout<<"not a perfect number\n";
    
    return 0;
}
