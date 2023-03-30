#include<iostream>
using namespace std;
int main()
{
  try
  {
    cout<<"Testing Any Exception"<<endl;
    // throw 10;
    // throw 'x';
    throw 1.2;
  }
  catch(...) // This ... dot is used to catch any type of datatype ex-int,char,float,....other's
  {
    cout<<"Catched the Throwned Value"<<endl;
  }
}