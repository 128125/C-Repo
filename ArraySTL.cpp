#include <iostream>
#include <array>
using namespace std;

int main()
{

// 1->> Array in STL.
    int arr[5] = {1, 2, 3, 4, 5};// This is Normal Array.

    array<int, 5> a = {5, 4, 3, 2, 1};// This is By STL.
    // We can't use these type of array in real world because it is static.
    int size=a.size();
    cout<<"The Size of the Array is: "<<a.size()<<endl;
    cout<<"The Array Elements are:"<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<""<<a[i]<<endl;
    }

    // At operation in Array 
    cout<<"The element at Array 2 is: "<<a.at(2)<<endl;

    cout<<"Empty or Not: "<<a.empty()<<endl;
    if (a.empty()==0)
    {
        cout<<"Array is not Empty"<<endl;
    }
    else
    {
        cout<<"Array is Empty";
    }

    // 1st and Last Element operation
    cout<<"The 1st Element of the Array is: "<<a.front()<<endl;
    cout<<"The Last Element of the Array is: "<<a.back()<<endl;

// 2-->Vector in STL



}