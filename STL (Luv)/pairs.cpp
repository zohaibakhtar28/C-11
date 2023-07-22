#include<iostream>
using namespace std;
int main()
{
    pair<int,string> p;
    p= {25, "Zohaib"};
    cout<<p.first<<endl;
    cout<<p.second<<endl;

    //Pairs are used to maintain relation b/w arrays.
    int a [] = {1,2,3};
    int b [] = {2,3,4};

    pair<int,int> pair_array[3];
    pair_array[0] = {1,2};
    pair_array[1] = {2,3};
    pair_array[2] = {3,4};

    //Original
    for(int i=0; i<3; i++)
    {
        cout<<pair_array[i].first<<" "<<pair_array[i].second<<endl;
    }

    swap(pair_array[0], pair_array[2]); //Swapped 1 and 3 of a[], automatically swapped 2 and 4 of b[]
    // Swapped
    for(int i=0; i<3; i++)
    {
        cout<<pair_array[i].first<<" "<<pair_array[i].second<<endl;
    }


return 0;
}