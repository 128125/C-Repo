#include<iostream>
using namespace std;
class base
{
    public:
    ~base()
    {
        cout<<"Base class destructor executed";
    }
};
class der: public base
{
    public:
    ~der()
    {
        cout<<"Der class Destructor executed"<<endl;// First it print their word then base executed
    }
};
int main()
{
 der d;
 return 0;
}