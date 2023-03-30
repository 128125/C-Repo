#include<iostream>
using namespace std;

int main()
{
 int a[5];
 int n=5;
 cout<<"Enter the element of the Array"<<endl;
 for (int i = 0; i <n; i++)
 { 
   cin>>a[i];
 }
 cout<<"Entered Array are : "<<endl;
 for (int i = 0; i <n; i++)
 { 
    cout<<a[i]<<endl;
 }
return 0;
} 