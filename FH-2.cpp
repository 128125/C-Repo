#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
class stu
{
    int id;
    char name[20];

public:
    void putstu()
    {
        cout << id << "\t" << name << endl;
    }
};
int main()
{
    stu s; // Object created
    ifstream file("Student.txt", ios::in);
    file.read((char *)&s, sizeof(s));
    cout<<"id\tname\n";
    cout<<"                \n";
    while (!file.eof())
    {
        s.putstu();
        file.read((char *)&s, sizeof(s));
    }
    file.close();
}