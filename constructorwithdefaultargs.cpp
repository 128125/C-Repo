#include<iostream>
using namespace std;
class test
{
    int a,b,c;
    public:
    test(){}
    test(int x=10,int y=20,int z=30)
    {
        a=x;b=y;c=z;
    }
    void show()
    {
        cout<<a<<"  "<<b<<"  "<<c<<"  "<<endl;
    }
};
int main()
{
 test t1(1,2,3);
 test t2(1,2);
 test t3(1);
//  test t4;
//  test t4 without arguments is not recognised by the Compiler.
 test t4();
 t1.show();
 t2.show();
 t3.show();
//  t4.show();
//  While we calling t4.show() it's also gives Error.
}