#include <iostream>
using namespace std;

// 1->>
// How to pass Same type of data for calculations.
// template <class t>
// t sum(t a,t b)
// {
//   return (a+b);
// }
// int main()
// {
//     cout<<"Int Sum= "<<(4+3)<<endl;
//     cout<<"Float Sum= "<<(1.1+4.3)<<endl;
//     return 0;
// }

// 2->>>
// How to pass Differnt type of data in same function
// template <class t1,class t2>
// float sum(t1 x,t2 y) // It's Better to use float as a return type because it gives int values as a result as well as float values.
// {
//     return(x+y);
// }
// int main()
// {
//     cout<<"The Sum of Int And Float is= "<<(5+5.5)<<endl;
//     cout<<"The Sum of float And Int= "<<(4.4+3)<<endl;
//     cout << "Int Sum= " << (4 + 3) << endl;
//     cout << "Float Sum= " << (1.1 + 4.3) << endl;
//     return 0;
// }

// 3->>
// Array Sum using template
// template <class t>
// t sum(t a[], int size)// Array size is always integer
// {
//     t s=0;
//     for (int i = 0; i < size; i++)
//     {
//         s=s+a[i];
//     }
//     return s;
// }
// int main()
// {
//     int a[5]={10,20,30,40,50};
//     float y[3]={1.1,2.2,3.3};
//     cout<<"The Sum of Array Element is= "<<sum(a,5)<<endl;
//     cout<<"The Sum of Float element is= "<<sum(y,3);
//     return 0;
// }

// 4->>
// Template Overloading or overloading generic function
// template <class t>
// t sum(t a,t b)
// {
//     return (a+b);
// }
// template <class t>
// t sum(t a,t b,t c)
// {
//     return(a+b+c);
// }
// int main()
// {
//     cout<<"The int sum= "<<(4+3)<<endl;
//     cout<<"The Float Sum= "<<(1.1+6.6)<<endl;
//     cout<<"The Sum Of Int= "<<(2+3+2)<<endl;
//     cout<<"The Sum of Float= "<<(1.1+2.2+4.4);
//     return 0;
// }

// 5->>
// template <class t>
// class test
// {
//     t a, b;

// public:
//     void get()//def
//     {
//         cin >> a >> b;
//     }
//     t sum();//declaration
// };
// template <class t>// again use of template
// t test<t>::sum() 
// {
//     return a + b;
// }
// int main()
// {
//     test<int> t1;// here we have to tell compiler that it is a int type object , because it allocate memory when datatype confirmed
//     test<float> t2;
//     cout << "Enter Two Integer" << endl;
//     t1.get();
//     cout << "The sum= " << t1.sum() << endl;
//     cout << "Enter Two Float:" << endl;
//     t2.get();
//     cout << "The Sum= " << t2.sum() << endl;
//     return 0;
// }
// Above we have only 1 class but we used that class for two different datatype sum cal.