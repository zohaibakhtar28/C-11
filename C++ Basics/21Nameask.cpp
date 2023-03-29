#include <iostream>
using namespace std;
int main()
{
    string name;
    cout << "What is your name\n";
    getline(cin, name);
    
    cout << "Welcome Mr./Mrs.\n"<<name;
    return 0;
}
