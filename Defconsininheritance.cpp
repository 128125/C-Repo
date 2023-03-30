#include<iostream>
#include<conio.h>
using namespace std;
class base
{
    public :
    base()
    {
        cout<<"Base class constructor Executed"<<endl;
    }
};
class der:public base
{
  public:
  der()
  { 
    // base::base() Implicit it is called
    cout<<"Derived class constructor executed";
  }
};
int main()
{
 der d;
 getch();
}