#include<iostream>
using namespace std;
// EH Nested Try Block

int main()
{
    try
    {
        cout<<"Welcome"<<endl;
        try
        {
            cout<<"Inner Try Block"<<endl;
            throw 10;
        }
        catch(int x)
        {
            cout<<"Throw Working"<<endl;
            throw x;
        }
    }
    catch(int y)
    {
        cout<<"Outer Try Block"<<endl;
    }
}