#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mul[10][10], r, c, i, j, k;
    cout << "Enter the Number of Row: "<<endl;
    cin>>r;
    cout << "Enter the Number of Column: " <<endl;
    cin>>c;
    cout << "Enter 1 Matrix Element" << endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    cout<<"Enter 2nd Element Matrix"<<endl;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin >> b[i][j];
        }
    }
    cout<<"Multiplication is Going on...."<<endl;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for ( k = 0; k < c; k++)
            {
                mul[i][j]+=a[i][k]*b[k][i];
            }
            
        }
        
    }
    cout<<"After Multiplication output is:"<<endl;
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            cout<<mul[i] [j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}