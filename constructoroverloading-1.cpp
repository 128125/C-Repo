#include<iostream>
using namespace std;
class circle
{
  float r;
  public :
  circle()
  {
    r=5;
  }
  circle(float r)
  {
    (*this).r=r;
  }
  void showarea()
  {
    cout<<"Area="<<3.14*r*r<<endl;
  }
};
int main()
{
 circle c1;
 circle c2(10);
 cout<<"Using Default Constructor"<<endl;
 c1.showarea();
 cout<<"Using Parameterized Constructor"<<endl;
 c2.showarea();
 return 0;
}