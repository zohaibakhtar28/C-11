#include<iostream>
using namespace std;
// Symbolic Constant
#define PI 3.1425 

#ifndef PI
    #define PI 3.14;
#endif


#define max(x,y) (x>y?x:y)
int main()
{

// cout<<PI;

cout<<max(10,12);
return 0;
}