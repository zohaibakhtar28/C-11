#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout<<"Enter a numbern\n";
    cin>>n;

    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<" "<<"x"<<" "<<i<<" "<<"="<< n*i<<endl;
    }
    
    return 0;
}
