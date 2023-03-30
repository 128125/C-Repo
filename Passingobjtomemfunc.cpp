#include <iostream>
#include <string.h>
using namespace std;
class sample
{
    int a;

public:
    void geta()
    {
        cout << "Enter a Value" << endl;
        cin >> a;
    }
    void puta()
    {
        cout << "a=" << a << endl;
    }
    void big(sample s2)
    {
        if (a > s2.a)
        {
            cout << "s1.a is Big" << endl;
        }
        else if (a < s2.a)
        {
            cout << "s2.a is Big" << endl;
        }
        else
        {
            cout << "Both are Equal" << endl;
        }
    }
};
int main()
{
    sample s1, s2;
    s1.geta();
    s2.geta();
    s1.puta();
    s2.puta();

    s1.big(s2);
}