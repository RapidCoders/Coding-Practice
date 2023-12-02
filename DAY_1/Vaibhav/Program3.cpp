/*
Q3. Write a program which takes a year as input and check whether it is leap year or not.

Input: 2000
Output: True.

Input: 2013
Output: False.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_leap(int year)
{
    if (year % 4 == 0)
        return true;
    return false;
}

int main(void)
{
    int y;

    cout << "Enter year: ";
    cin >> y;

    if (check_leap(y))
        cout << "It is a leap year.";
    else
        cout << "Is is not a leap year.";

    return 0;
}
