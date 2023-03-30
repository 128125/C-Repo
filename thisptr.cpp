#include<iostream>

using namespace std;
class test
{     
    int a,b;
    public:
    void show()
    {
      a=10,b=12;
      // This ptr is used for returning Adress
      cout<<"Adress = "<<this<<endl;
      cout<<"a="<< this->a<<endl;
      cout<<"b="<< this->b<<endl;
    }
};
int main()
{
test t;
t.show();
return 0;
}