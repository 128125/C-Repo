#include <iostream>
using namespace std;
class sample
{
    int a, b;
    friend void print(sample);
};
void print(sample s)
{
    s.a = 25;
    s.b = 50;
    cout << "a= " << s.a << endl;
    cout << "b= " << s.b << endl;
}
int main()
{
    sample s;
    print(s);
    return 0;
}