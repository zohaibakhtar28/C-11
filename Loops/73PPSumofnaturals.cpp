#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,sum = 0;
    cout<<"Enter n\n";
    cin>>n;
    for (int i = 1; i <= n ; i++)
    {
        sum = sum + i;
    }
    cout<<"Sum :"<<" "<<sum;
    return 0;
}
