#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[] = {4,8,6,9,5,2,7};
    int Max = A[0];
    for (int i = 0; i < 7; i++)
    {
        if (A[i]>Max)
        {
            Max = A[i];
        }
        
    }
    cout<<"Maximum is :"<<" "<<Max<<endl;
    
    return 0;
}
