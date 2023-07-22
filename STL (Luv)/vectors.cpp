#include<bits/stdc++.h>
using namespace std;
void printVec(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
}
int main()
{
    vector<int> v = {1,2,3};
    v.push_back(4);
    v.push_back(5); // adds value to the end of vector.
    printVec(v); cout<<endl;
    v.pop_back(); // deletes value from last.
    printVec(v);

    

return 0;
}