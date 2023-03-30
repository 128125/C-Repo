#include <iostream>
using namespace std;
int x = 200;
void func()
{
    class test
    {
        int x;

    public:
        void show()
        {
            x = 100;
            cout << "Local x=" << x << endl;
            cout << "Global x=" << ::x; // :: Scope operator also used to access Global Variable.
        }
    };
    test t; // Obj creation inside the function
    t.show();//calling
}
int main()
{
    func();
    return 0;
}