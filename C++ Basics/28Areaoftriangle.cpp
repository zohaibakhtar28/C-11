#include<iostream>
using namespace std;
int main()
{
    float base,height,result;
    cout<<"Enter Base and Height";
    cin>> base>>height;
    result = (float)0.5*(base * height);
    cout<< "Area of the triangle is "<<result;
    return 0;
}
