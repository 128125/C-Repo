#include <iostream>
#include <string.h>
using namespace std;
class stu
{
    char name[20], course[20];

public:
    stu()
    {
    }
    stu(char name[20], char course[20])
    {
        strcpy(this->name, name);
        strcpy(this->course, course);
    }
    void showstu()
    {
        cout << "Name= " << name << endl;
        cout << "Course= " << course << endl;
    }
};
class marks : public stu
{
    int p, c, m;

public:
    marks(char name[20], char course[20], int p, int c, int m)
    {
        marks::stu(name, course);
        this->p = p;
        this->c = c;
        this->m = m;
    }
    void showmark()
    {
        cout << "p=" << p << endl;
        cout << "c=" << c << endl;
        cout << "m=" << m << endl;
    }
};
int main()
{
    marks m("Abhay", "BCA", 98, 99, 96);
    m.showstu();
    m.showmark();
    return 0;
}