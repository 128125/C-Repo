#include <iostream>
using namespace std;
class stu // Base class
{
    int id;
    char name[30];

public:
    void getstu()
    {
        cout << "Enter Stu id and name:";
        cin >> id >> name;
    }
    void putstu()
    {
        cout << "id= " << id << endl;
        cout << "Name= " << name << endl;
    }
};
class marks // Another Base class
{
protected:
    int m1, m2, m3;

public:
    void getmark()
    {
        cout << "Enter 3 Stu Marks: " << endl;
        cin >>m1>> m2>> m3;
    }
    void putmark()
    {
        cout << "Marks m1= " << m1<<endl;
        cout << "Marks m2= " << m2<<endl;
        cout << "Marks m3= " << m3<<endl;
    }
};
class result : public stu, public marks // Result is derived class
{
    int total;
    float avg;

public:
    void show()
    {
        total = m1 + m2 + m3;
        avg = total / 3.0;
        cout << "Total= " << total << endl;
        cout << "avg= " << avg << endl;
    }
};
int main()
{
    result r;
    r.getstu();
    r.getmark();
    r.putstu();
    r.putmark();
    r.show();
    return 0;
}