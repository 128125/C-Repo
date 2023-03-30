#include <iostream>
using namespace std;
class test2;
class test1
{
    int a;

public:
    void geta()
    {
        cout << "Enter a Value" << endl;
        cin >> a;
    }
    friend void operator>(test1, test2);
};
class test2
{
    int b;

public:
    void getb()
    {
        cout << "Enter b Value" << endl;
        cin >> b;
    }
    friend void operator>(test1, test2);
};
void operator>(test1 t1, test2 t2)
{
    // t1.a > t2.b ? cout << "a is big " : cout << "b is big";
    if (t1.a > t2.b)
    {
        cout << "a is big ";
    }
    else if (t1.a < t2.b)
    {
        cout << "b is big ";
    }
    else
        {
            cout << "Both are Equal";
        }
}
int main()
{
    test1 t1;
    test2 t2;
    t1.geta();
    t2.getb();
    t1 > t2;

    return 0;
}