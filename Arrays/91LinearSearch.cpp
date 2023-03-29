#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int A[10]; 
    int n =10;
    int i;
    cout<<"Enter Elements\n";
    for ( i = 0; i < 10; i++)
    {
        cin>>A[i];
    }
    int key;
    cout<<"Enter Key\n";
    cin>>key;
    for ( i = 0; i < 10; i++)
    {
        if (key == A[i])
        {
            cout<<"Key Found at Index :"<<" "<<i<<endl;
            return 0;
        }
        
    }
    cout<<"Key not Found\n";
    
    return 0;
}
