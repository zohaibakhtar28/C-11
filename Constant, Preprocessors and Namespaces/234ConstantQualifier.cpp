#include<iostream>
using namespace std;
int main()
{
    //Use : 1
    const int x = 10;
    //x++ Not Allowed.
    //cout<<x : Allowed.

    //Use : 2
    int y = 20; 
    // int *ptr = &y; Not Allowed
    const int *ptr = &y;
    // modification not possible

return 0;
}