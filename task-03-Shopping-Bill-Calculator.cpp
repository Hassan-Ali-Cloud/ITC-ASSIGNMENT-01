//Roll No. : L1F26BSCS0297
//Nmae  :   Hassan ALi
//  Task-03



#include <iostream>
using namespace std;

int main()
{
    float price, totalBill, discount, finalBill;
    int quantity;

    // taking input from the user
    cout << "Enter price of one item: ";
    cin >> price;
    cout << "Enter quantity purchased: ";
    cin >> quantity;

    //  total bill
    totalBill = price * quantity;

    cout << "Original Bill = Rs. " << totalBill << endl;

    // Checking customer's discount
    if (totalBill >= 5000)
    {
        discount = totalBill * 10 / 100;
        finalBill = totalBill - discount;
        cout << "Discount = Rs. " << discount << endl;
    }
    else
    {
        finalBill = totalBill;
        cout << "No discount applicable." << endl;
    }
    cout << "Final Bill = Rs. " << finalBill << endl;

    return 0;
}