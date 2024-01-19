/*
Q.2 Write a program to convert USD to INR

Input  : 10
Output : 831.06

Input  : 750
Output : 62329.31

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

double usd_to_inr(double usd)
{
    return usd * 83.11;
}

int main(void)
{
    double usd;

    cout << "\nEnter the amount is USD: ";
    cin >> usd;

    cout << usd << " USD in INR is: " << usd_to_inr(usd) << endl;

    return 0;
}
