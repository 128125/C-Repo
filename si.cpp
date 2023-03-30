#include<iostream>
using namespace std;
float si (float p,float t,float r)
{
    return (p*t*r)/100;
}
int main()
{
  float p,t,r;
  cout<<"Enter value of p,t,r"<<endl;
  cin>>p>>t>>r;
  si(p,t,r);
  cout<<"The Simple Interest is:"<<si(p,t,r)<<endl;
  return 0;
}