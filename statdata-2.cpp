#include<iostream>
using namespace std;
class sample{
    // int count;// It is not a good Approach For this example.
    static int count;
    public:
    sample()
    {   
        count++;
        cout<<count<<" Object is Created"<<endl;
    }
    ~sample()
    {
        cout<<count<<" Object Deleted "<<endl;
        count--;
    }
};
int sample::count;
int main()
{
 sample s1,s2,s3;
} 