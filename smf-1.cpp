#include<iostream>
using namespace std;
class test{
    static int a,b;
    public:
    static void get(){
        cout<<"Enter the Two Integers"<<endl;
        cin>>a>>b;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }
};
int test::a;
int test::b;
int main()
{
 test t;
 t.get();
 test::get();
}