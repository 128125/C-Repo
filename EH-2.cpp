#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    try
    {
        cout << "Before Throw" << endl;
        throw 1;
        cout << "After Throw";
    }
    catch (int x)
    {
        cout << x << " is printed" << endl;
    }
    cout << "Thank You" << endl;
}