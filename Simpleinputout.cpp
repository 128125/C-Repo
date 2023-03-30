#include<iostream>
using namespace std;
class stu
{
 int id;
 char name[];
 public:
 void getdata()
 {
    cout<<"Enter the Student id And name"<<endl;
    cin>>id>>name;
 }
 void putdata();
};
void stu::putdata()
{
    cout<<"id= "<<id<<endl;
    cout<<"name= "<<name<<endl;
}
int main()
{
 stu s;
 s.getdata();
 s.putdata();
 return 0;
}