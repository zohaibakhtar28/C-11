#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream ofs("My.txt");
    ofs<<"John"<<endl;
    ofs<<"25"<<endl;
    ofs<<"cs"<<endl;
return 0;
}