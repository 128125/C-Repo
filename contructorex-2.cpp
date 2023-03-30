#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class stu
{
    char name[20], course[20];
    float fee;

public:
    stu(){};
    stu(char name[20], char course[20])
    {
        strcpy(this->name, name);
        strcpy(this->course, course);
        fee = 0;
    }
    stu(char name[20], char course[20], float fee)
    {
        // stu::stu (name,course); We can call Like This 
        strcpy((*this).name,name);
        strcpy((*this).course,course);
        this->fee = fee;
    }
    void showstudent()
    {
        cout << "Name:" << name<< endl;
        cout << "Course:" << course<< endl;
        cout << "Fee:" << fee<< endl;
    }
};
int  main()
{
    
    stu s1("Abhay","CPP");
    stu s2("Optics","BCA",62000);
    s1.showstudent();
    s2.showstudent();
    return 0;
}