#include<iostream>
using namespace std;
int g = 10;
int main()
{
    int g = 20;
    {
        int g = 30;
        cout<<g<<endl;
    }
    cout<<g<<endl;
    cout<<::g<<endl;
return 0;
}