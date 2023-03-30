// Exception Habdeling in Class
#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "I am Constructor" << endl;
    }
    ~test()
    {
        cout << "I am Destructor" << endl;
    }
};
int main()
{
    try
    {
        cout << "Welcome to Exception Handeling" << endl;
        test t; // Object created then constructor automatic recalled
        throw 10;
        cout << "testing destructor";
    }
    catch (...)
    {
        cout << "Thank You";
    }
}