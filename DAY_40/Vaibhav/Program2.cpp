/*
Q.2 Program to Convert meter to Feet and Inches.

Input  : 40
Output : The value of 40 meter in Inches is:  1574.80
         The value of 40 meter in feet is: 131.24

Input  : 10
Output : The value of 10 meter in Inches is: 393.7
         The value of 10 meter in Feet is: 32.81

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define INCH 39.3701
#define FEET 3.28084

double meter_to_inch(double meter_val) { return meter_val * INCH; }

double meter_to_feet(double meter_val) { return meter_val * FEET; }

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nThe value of " << num << " meter in inches is: " << meter_to_inch(num) << endl;
    cout << "\nThe value of " << num << " meter in feet is: " << meter_to_feet(num) << endl;

    return 0;
}
