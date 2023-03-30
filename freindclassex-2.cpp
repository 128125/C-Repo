#include<iostream>
using namespace std;
class author  // This class is Container Class
{
  char aname[25];
  friend class book;
};

class book    // This is Known as Contained Class
{
    char bname[25];
    float price;
    
    author a; //Composition- Means Declaring a obj. of different class in diff. class body.

    public:
    void getdata()
    {
        cout<<"Enter Author Name"<<endl;
        cin>>a.aname;// We have to use the object name before data member calling in freind class
        cout<<"Enter Book Name"<<endl;
        cin>>bname;
        cout<<"Enter Price"<<endl;
        cin>>price;
    }
    void putdata()
    {
      cout<<"Book Name:"<<bname <<endl;
      cout<<"Author Name:"<<a.aname <<endl;
      cout<<"Price:"<<price<<endl;
    }
};
int main()
{
 book b;
 b.getdata();
 b.putdata();
} 