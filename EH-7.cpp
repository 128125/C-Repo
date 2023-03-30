#include <iostream>
using namespace std;
class bank
{
    long int accno;
    char name[20];
    float bal;

public:
    void getacc()
    {
        cout << "Enter Your Details" << endl;
        cout << "AccNo->";
        cin >> accno;
        cout << "Name->";
        cin >> name;
        cout << "Bal->";
        cin >> bal;
    }
    void putacc()
    {
        cout << "Your AccNo. is: " << accno << endl;
        cout << "Name is:" << name << endl;
        cout << "Bal is:" << bal << endl;
        cout << "Account Created Succesfully";
    }
};
int main()
{
    bank b;
    b.getacc();
    b.putacc();
    return 0;
}
// This is stored in stack whenever your lappi is not off,but when you off you lappi then these data is erased. To Avoid these mistakes we have to use Secondry Story.