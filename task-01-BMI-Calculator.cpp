//Roll No. : L1F26BSCS0297
//Nmae  :   Hassan ALi
//  Task-01

#include <iostream>
using namespace std;

int main()
{
    float weight, heightCm, heightM, bmi;

    // taking input from the user
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in centimeters: ";
    cin >> heightCm;

    heightM = heightCm / 100;

    // calculating BMI
    bmi = weight / (heightM * heightM);

    cout << "Your BMI = " << bmi << endl;

    // checking the category
    if (bmi < 18.5)
    {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi < 25)
    {
        cout << "Category: Normal Weight" << endl;
    }
    else
    {
        cout << "Category: Overweight" << endl;
    }

    return 0;
}