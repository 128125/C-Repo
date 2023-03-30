#include<iostream>
#include<conio.h>
using namespace std;
class test
{ 
    int a,b;
    public :
    void show(int a, int b)
    {
    //    this Logic Prints the garbage value in a and b
    //    a=a;
    //    b=b;
    // Use this to pass the value in test class a and b
    this->a=a;
    this->b=b;
    }
    void display()
    {   
        cout<<"The Value of a"<<endl;
        cout<<"And"<<endl;
        cout<<"The Value of b"<<endl;
        cout<<"Are"<<endl;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
    }

};
int main()
{
 test t;
 t.show(10,12);
 t.display();
 getch();

} 