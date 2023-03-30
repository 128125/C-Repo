#include <iostream>
using namespace std;
class stu// Base class
{
    int idno;
    char name[20];
    public:
    void getstu()
    {
        cout<<"Enter Student id And Name:"<<endl;
        cin>>idno>>name;
    }
};
class marks:public stu
{
    protected:
    int p,c,m;
    public:
    void getmarks()
    {
        cout<<"Enter The Marks of 3 Subject's "<<endl;
        cin>>p>>c>>m;
    }
};
class sports
{  protected:
    int spmarks;
    public:
    void getspmarks()
    {
        cout<<"Enter Sports Marks"<<endl;
        cin>>spmarks;
    }
};
class result:public marks,public sports
{
   int tot;
   float avg;
   public:
   void show()
   {
       tot=p+c+m;
       avg=tot/3.0;
       cout<<"Tot= "<<tot<<endl;
       cout<<"Avg= "<<avg<<endl;
       cout<<"Avg+spmarks = "<<avg+spmarks;
   }
};
int main() 
{
    result r;
    r.getstu();
    r.getmarks();
    r.getspmarks();
    r.show();
    return 0;
}