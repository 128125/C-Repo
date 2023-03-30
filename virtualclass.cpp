#include <iostream>
using namespace std;
class c1
{
public:
    void c1func()
    {
        cout << "c1 class function"<<endl;
    }
};
// class c2 : public c1 Instead of this we add virtual keyword than it will not give errror
class c2 : public virtual c1
{
public:
    void c2func()
    {
        cout << "c2 class function"<<endl;
    }
};
// class c3:public c1 Instead of this we add virtual keyword than it will not give errror
class c3:public virtual c1 
{
  public:
  void c3func()
  {
    cout<<"c3 class Function"<<endl;
  }
};
class c4: public c2,public c3
{
  public :
  void c4func()
  {
    cout<<"c4 class Execution";
  }
};
int main()
{
    c4 obj;
    // obj.c1func(); It gives Error because we call more than one time with same prototype
    obj.c1func();
    obj.c2func();
    obj.c3func();
    obj.c4func();
    return 0;
}