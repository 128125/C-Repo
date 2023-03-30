// Exception Handeling Part-1
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    try
    {
        cout << "Enter Two No." << endl;
        cin >> a >> b;
        if (b == 0)
        {
            throw 0;
        }
        cout << "The Div is " << a / b << endl;
    }
    catch (int x)
    {
        cout << "Division is Not Possible" << endl;
    }
}