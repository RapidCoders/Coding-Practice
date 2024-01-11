/*
Q.2 Program to Convert Celsius into Fahrenheit.

Input  : 40
Output : 104F

Input  : 10
Output : 50F

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#define FAHRENHEIT 32

double celsius_to_fahrenheit(double celsius)
{
    return (celsius * (9.0 / 5.0)) + FAHRENHEIT;
}

int main(void)
{
    double celsius;

    cout << "\nEnter the temperature in Celsius: ";
    cin >> celsius;

    cout << celsius_to_fahrenheit(celsius) << "F\n";

    return 0;
}
