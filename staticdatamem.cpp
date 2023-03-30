#include <iostream>
using namespace std;
class test
{
public:
    static int a;
    void geta()
    {
        a = 10;
        cout << "a= " << a << endl; // it print a=10; because It gives priority to local variable
    }
};
int test::a = 10;
int main()
{
    test::a = 100;
    cout << "a= " << test::a << endl;
    test t;
    t.geta();
}