#include<iostream>
#include<stack>
using namespace std;

int main()
{
 
 stack<string> s;

//  Inserting an Element in Stack
 s.push("Ajayeshwar");
 s.push("Abhay");
 s.push("Nidhi");
 s.push("Aavya");
 s.push("Devesh");
 s.push("Prachi");// Lifo

 cout<<""<<s.top()<<endl;
 s.pop();

 cout<<""<<s.top()<<endl;
 s.pop();
 cout<<""<<s.top()<<endl;
 s.pop();
 cout<<""<<s.top()<<endl;
 s.pop();
 cout<<""<<s.top()<<endl;
 s.pop();
 cout<<""<<s.top()<<endl;
}