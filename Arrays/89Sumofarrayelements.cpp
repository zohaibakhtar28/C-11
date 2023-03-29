#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int sum = 0;
    int A[] = {4,8,6,9,5,2,7};
    for (int i = 0; i < 7; i++)
    {
        sum = sum + A[i];
    }
    cout<<"Sum is "<<" "<<sum<<endl;
    return 0;
}
