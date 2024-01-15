/*
Q.2 Write a program to convert hours into minutes and seconds.

Input  : Enter number of Hours : 2
Output : Number of Minutes : 120
         Number of Seconds : 7200

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int hours_to_minutes(int hours)
{
    return hours * 60;
}

int hours_to_seconds(int hours)
{
    return hours_to_minutes(hours) * 60;
}

int main(void)
{
    int hours;

    cout << "\nEnter the hours: ";
    cin >> hours;

    cout << endl
         << hours << " hours in minutes is: " << hours_to_minutes(hours) << endl;
    cout << endl
         << hours << " hours in seconds is: " << hours_to_seconds(hours) << endl;

    return 0;
}
