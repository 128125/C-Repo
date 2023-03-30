#include <iostream>
using namespace std;
class stu
{
    int a, b;

public:
    stu()
    {
        int a = 10, b = 30;
    }
    ~stu()
    {
        cout << "a=" << a << endl;
        cout << "b=" << b << endl;
    }
};
int main()
{   
    stu s;
}