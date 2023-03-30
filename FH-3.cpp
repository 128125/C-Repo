#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
class stu
{
    int id;
    char name[20];

public:
    void enq();
};
void stu::enq()
{
    stu s;// Obj created
    ifstream file("Student.txt", ios::in);
    int idno, found = 0;
    cout<<"Enter Student id"<<endl; cin>>idno;
    file.read((char *)&s,sizeof(s));
    while(!file.eof())
    {
        if (s.id==idno)
        {
            cout<<"id\tName\n";
            cout<<"            \n";
            cout<<s.id<<"\t"<<s.name<<endl;
            found=1;
            break;
        }
        file.read((char *)&s,sizeof(s));
    }
    file.close();
    if(found==0) cout<<"Stu not Found";
}
int main()
{
    stu s;
    s.enq();
}