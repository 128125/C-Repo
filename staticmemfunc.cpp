#include<iostream>
using namespace std;
class test{
    public:
    static void get(int x, int y){
                if (x>y)
                {
                    cout<<"x is Big"<<endl;
                }
                else if (x<y)
                {
                    cout<<"y is Big"<<endl;;
                }
                else {cout<<"Both are Equal";}
                
                
    }
};
int main()
{
 test t1;
 t1.get(10,5);// Calling Static mem func using Objectname.
 test::get(12,23);// Calling static mem using classname.
 test::get(5,5);
}
// When it is non-static mem func. call using classname gives error.