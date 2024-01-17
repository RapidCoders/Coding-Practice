/*
Q.2 Write a program to calculate simple interest.

Input  : P = 10000
         R = 5
         T = 5
Output : 2500

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int find_simple_interest(int principal, int rate, int time)
{
    return (principal * 5 * 5) / 100;
}

int main(void)
{
    int principal, rate, time;

    cout << "\nEnter the principal: ";
    cin >> principal;

    cout << "\nEnter the rate: ";
    cin >> rate;

    cout << "\nEnter the time: ";
    cin >> time;

    cout << "\nSimple interest is: " << find_simple_interest(principal, rate, time) << endl;

    return 0;
}
