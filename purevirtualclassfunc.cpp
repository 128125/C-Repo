#include <iostream>
using namespace std;
class shape // Abstract Base class or Meta Class
{
  protected:
  float d1,d2;
  public:
  void getdim()
  {
    cin>>d1>>d2;
  }
  virtual float area()=0; // When a func declared with virtual keyword and initialised with 0 then it is called pure virtual function.
};
class triangle: public shape
{
    public:
    virtual float area()
    {
        return(0.5*d1*d2);
    }
};
class rectangle: public shape
{
    public:
    virtual float area()
    {
        return(d1*d2);
    }
};
int main()
{
    triangle t;
    cout<<"Enter triangle base and height"<<endl;
    t.getdim();
    cout<<"Triangle Area= "<<t.area()<<endl;
    rectangle r;
    cout<<"Enter Rectangle length and breadth"<<endl;
    r.getdim();
    cout<<"Rectangle Area= "<<r.area()<<endl;
    return 0;
}