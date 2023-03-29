#include <iostream>
#include<string>
using namespace std;
int main()
{
    string str = "MADAM";
    string rev = "";
    int length,j;
    length = (int)str.length(); // str,length() returs value as Long Int.
    rev.resize(length);
    for (int i = 0, j = length-1; i < length; i++, j--)
    {
        rev[j] = str[i];
    }
    rev[length] = '\0';
    if (str.compare(rev) == 0)
    {
        cout<<"Palindrome\n";
    }
    else cout<<"Not Palindrome\n";
    
    return 0;
}