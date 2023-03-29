#include<iostream>
#include<map>
using namespace std;
//Map uses Key and Key value associated with it.
int main()
{
    map<int,string> m;
    m.insert(pair<int,string>(1, "John"));
    m.insert(pair<int,string>(2, "Ravi"));
    m.insert(pair<int,string>(3, "Khan"));

    // Iterator.
    cout<<"Iterating through the Map"<<endl;
    map<int,string>::iterator itr;
    for (itr = m.begin(); itr!= m.end(); itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    

    // Some Functions on Map STL. 
    // Find Key Value using key.

    map<int,string> :: iterator itr1;
    itr1= m.find(2); // itr1 will be assinged to key valued 2.
    cout<<"Key Value Found\n";
    cout<<itr1->first<<" "<<itr1->second<<endl;


return 0;
}