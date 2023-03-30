#include <iostream>
#include <vector>
using namespace std;

// It is Dynamic Type;
int main()
{
    vector<int> v;

    vector<int> a(5,1);

    vector<int> last(a);
    cout<<"Print Last"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
    }cout<<endl;


    cout << "Size-> " << v.size() << endl;     // We can use size to find the size of the Vector.
    cout << "Size-> " << v.capacity() << endl; // We can use capacity to find how many elements are there in Vector.

    // To insert an element in vector we use Push_back
    v.push_back(1);
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity-> " << v.capacity() << endl;

    // When we use 3 in Vector then it increses their size from 2 to 4
    // This is because it Dooubles the size not increase at 1-1 format but instead of this it Doubles.

    v.push_back(3);
    cout << "Capacity-> " << v.capacity() << endl;
    cout << "Size-> " << v.size()<<endl;
    // Here
    // Size-> tells How much Element is present in Vector
    // while
    // Capacity-> tells How much Space assigned for Element's.

    cout<<"Element at 2nd Index: "<<v.at(2)<<endl;


    cout<<"The 1st Element of the Vector is: "<<v.front()<<endl;
    cout<<"The Last Element of the Vector is: "<<v.back()<<endl;


    cout<<"Before Pop"<<endl;
    for(int i:v)
    {
      cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After Pop"<<endl;
    for(int i:v)
    {
      cout<<i<<" ";
    }cout<<endl;


    cout<<"Before Clear vector size: "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear vector size: "<<v.size()<<endl;


    return 0;
}