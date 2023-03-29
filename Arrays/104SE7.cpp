#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter Order of 1st matrix\n";
    cin >> r1 >> c1;
    cout << "Enter Order of 2nd Matrix\n";
    cin >> r2 >> c2;
    int A[r1][c1];
    int B[r2][c2];

    cout << "Enter Elements of 1st Matrix\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin>>A[i][j];
        }
    }

    cout << "Enter Elements of 2nd Matrix\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin>>B[i][j];
        }
    }

    cout<<"First Matrix\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"Second Matrix\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int C[r1][c2];
    
    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
        {
            
            for (int j = 0; j < c2; j++)
            {
                int sum = 0;
                for (int k = 0; k < c1; k++)
                {
                    sum = sum + A[i][k] * B[k][j];
                }
                C[i][j] = sum;
            }
            
        }
        
        
    }
    else
        cout<<"Product Not Possible\n";

    cout<<"Product\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}