/*
Q.2 Write a method to check and return whether given number is nude number or not.
Explanation:
A number is said to be nude number if all the digits of the number is the factor of that number.
In short, nude numbers are those numbers that expose their factor.

Example 1:
672 is a nude number because all the digits (6, 7, and 2) of the number are the factors of the number itself.

Let's see another example.

Example 2:
101 is not a nude number because all of the digits of the number 101, i.e., 1 and 0, do not divide the number 101.
Observe that 1 divides the number 101, but 0 does not divide the number. Thus, we got at least one digit that does not divide the number 101.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_nude(int num)
{
    int temp = num;

    while (temp)
    {
        if (num % (temp % 10))
            return false;
        temp /= 10;
    }
    return true;
}

int main(void)
{
    int num;

    cout <<"\nEnter the number: ";
    cin >> num;

    if (check_nude(num))
        cout << "\nIt is a nude number.\n";
    else
        cout << "\nIt is not a nude number.\n";

    return 0;
}