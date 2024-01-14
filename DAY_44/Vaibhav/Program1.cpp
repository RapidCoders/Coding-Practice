/*
Q.1 Write a program to accepts the number as input from the user and check whether the number is positive or not.

Input: 10
Output: Positive

Input: -15
Output: Negative

Input: 0
Output: Neutral

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int check_positive(int num)
{
    if (num > 0)
        return 1;
    else if (num < 0)
        return -1;
    return 0;
}

int main(void)
{
    int num, result;

    cout << "\nEnter the number: ";
    cin >> num;

    result = check_positive(num);

    if (result > 0)
        cout << "\nPositive\n";
    else if (result < 0)
        cout << "\nNegative\n";
    else
        cout << "\nNeutral\n";

    return 0;
}
