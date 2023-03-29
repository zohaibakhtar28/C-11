#include<iostream>
#include<forward_list>
using namespace std;
//Vector STL Class.
int main()

{
    forward_list<int> v = {2,4,6,8};
    
    /*
    As singly LL doesnt suppport push and pop from back.
    v.push_back(20);
    v.push_back(30);
    */

    v.push_front(20);
    v.push_front(30);
    //Iterator : For Each
    cout<<"Using For Each Loop"; 
    for(int x : v)
    {
        cout<<x<<endl;
    }
    v.pop_front(); //deletes last value.
    //Iterator 2 : Iterator Class

    forward_list<int>::iterator itr;
    cout<<"Using Iterator\n";
    for(itr=v.begin(); itr!= v.end(); itr++)
    {
        cout<<*itr<<endl;
    }

return 0;
}