#include<iostream>
#include<string>
using namespace std;
// Length includes whitespaces also //
int main()
{
    string str;
    cout<<"Enter String\n";
    getline(cin, str);

    int count = 0;
    string::iterator itr;
    for (itr = str.begin(); itr!= str.end(); itr++)
    {
        count++;
    }
    cout<<"Length : "<<" "<<count<<endl;

return 0;
}