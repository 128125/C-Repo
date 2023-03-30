#include<iostream>
#include<fstream>
using namespace std;
class stu
{
    int id;
    char name[20];
    public:
    void getstu()
    {
        cout<<"Enter Student id and Name"<<endl;
        cin>>id>>name;
    }
};
int main()
{
    stu s;
    // ofstream file("Student.txt", ios::out);// BY Using Parameterized constructor
    ofstream file;
    file.open("Student.txt");// By using open member function
    char op;
    do
    {
        s.getstu();
        file.write((char*)&s, sizeof(s));
        cout<<"One row Created"<<endl;
        cout<<"Any more Students[Y/N]"<<endl;
        cin>>op;
    } while (op=='Y'||op=='y');
    file.close();
}