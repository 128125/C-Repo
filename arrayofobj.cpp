#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

class stu
{
  int id,sub[6];
  char name[20];
   public :
   void getstu();
   void result();
};
void stu::getstu()
{
  cout<<"Enter Student id and Name"<<endl;
  cin>>id>>name;
  cout<<"Enter 6 Subjects Marks"<<endl;
  for (int i = 0; i < 6; i++)
  {
    cin>>sub[i];
  }
  
}
void stu::result()
{
  int tot=0;
  float avg;
  for (int i = 0; i < 6; i++)
  {
    tot +=sub[i];
    // or 
    // tot= tot + sub[i];
  }
  avg=tot/6;
  cout<<"Total= "<<tot<<endl;
  cout<<"Avg= "<<avg<<endl;
  cout<<"Result= ";

  for (int i = 0; i < 6; i++)
  {
    if (sub[i]<35)  
    {
        cout<<"Fail"<<endl;
        goto end;
    }
    cout<<"Pass in sub"<<i<<endl;
  } 
  end:
  getch();
}
int main()
{
 stu s;
 s.getstu();
 s.result();
 getch();
}