#include <iostream>
#include <conio.h>
using namespace std;
class test
{
    int a;

public:
    test()
    {
        a = 0;
    }
    int operator++() // in between operator and symbol space is not required.
    {
        a++;
        return a;
    }
    int operator--()
    {
        a--;
        return a;
    }
    void show()
    {
        cout << "a= " << a << endl;
    }
};
int main()
{
    test t;
    ++t;// Pre-increment is used because post gives error.
    t.show();
    --t;
    t.show();

    return 0;
}