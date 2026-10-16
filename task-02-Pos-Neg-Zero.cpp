//Roll No. : L1F26BSCS0297
//Nmae  :   Hassan ALi
//  Task-02



#include <iostream>
using namespace std;
int main()
{
    int number;

    // Taking input from the user
    cout << "Enter an integer: ";
    cin >> number;

    // Checking the number
    if (number > 0)
    {
        cout << "Positive Number" << endl;
    }
    else if (number < 0)
    {
        cout << "Negative Number" << endl;
    }
    else
    {
        cout << "Zero" << endl;
    }

    return 0;
}