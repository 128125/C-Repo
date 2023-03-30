#include<iostream>
using namespace std;
// Try Block Without Catch Block...
int main()
{
    try
    {
        throw 10;
    }
}
// Whenever we used throw then we have to use catch block. otherwise it gives an error.