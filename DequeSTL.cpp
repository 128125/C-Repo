#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> d; // Creating a Deque

    d.push_back(3);  // To insert Element at end
    d.push_front(1); // To insert Element at the Front or 1st

    //  for(int i: d)
    //  {
    //     cout<<i<<" ";
    //  } // Use of loop to print Deque Element

    //  d.pop_back();// to delete end element of the deque
    //  d.pop_front();// to delete Front element of the deque
    for (int i : d)
    {
        cout << i << " ";
    }

    cout<<"Element at First index: "<<d.at(1)<<endl;

    cout << "The 1st Element of the Deque is: " << d.front() << endl;
    cout << "The Last Element of the Deque is: " << d.back() << endl;


    cout<<"Empty or Not: "<<d.empty()<<endl;
    if (d.empty()==0)
    {
        cout<<"Deque is not Empty"<<endl;
    }
    else
    {
        cout<<"Deque is Empty";
    }

    cout<<"Before Erase Size of the deque is: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase size: "<<d.size()<<endl;

    for(int i:d )
    {
        cout<<i<<" ";
    }


    // Size will erased using .erase() But, MAX Size will remain Same.
}