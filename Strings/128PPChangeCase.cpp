#include<iostream>
#include<string>
using namespace std;
//Change from Lower Case to Upper Case
int main()
{
string str = "WelCoMe7";
for (int i = 0; str[i]!= '\0';i++)
{
    if (str[i] >= 97 && str[i] <= 122)
    {
        str[i] = str[i]-32;
    }
}
cout<<str<<endl;

return 0;
}