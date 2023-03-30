#include <iostream>
#include <string.h>
using namespace std;
class test
{
    char st[100];

public:
    void read()
    {
        cout << "Enter String: " << endl;
        cin >> st;
    }
    void show()
    {
        cout << "string =" << st << endl;
    }
    test operator+(test t2)
    {
        test t3;
        strcpy(t3.st,st);
        strcat(t3.st," ");
        strcat(t3.st,t2.st);
        return t3;
    }
};
int main()
{
    test t1, t2, t3;
    t1.read();
    t2.read();
    t3 = t1 + t2;
    t3.show();
}