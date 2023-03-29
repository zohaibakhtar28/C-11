#include <iostream>
#include <string>
using namespace std;
int main()
{
    string email = "john123@gmail.com";
    int index;
    index = (int)email.find('@');
    string username;
    username = email.substr(0, index);
    cout<<"Username :"<<" "<<username<<endl;
    return 0;
}