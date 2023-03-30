#include<iostream>
using namespace std;
class base
{
    public:
    base()
    {
        cout<<"Base Class Constructor"<<endl;
    }
    virtual ~base()// After Virtual keyword it binds the der class destructor.
    {
        cout<<"Base class destructor executed"<<endl;
    }
};
class der: public base
{
    public:
    der()
    {
        cout<<"Der class constrctor"<<endl;
    }
    ~der()
    {
        cout<<"Der class Destructor executed"<<endl;// First it print their word then base executed.
    }
};
int main()
{
 base *b= new der;
 delete b;
 return 0;
}