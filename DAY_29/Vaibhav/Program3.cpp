/*
Q.3 Write a program to check number is Abundant Number or Not.

Input: 12
Output: True.

Explanation:
12 having a proper divisor is 1, 2, 3, 4, 6 

The sum of these factors is 16 it is greater than 12 
So it is an Abundant number

Some other abundant numbers: 

18, 20, 30, 70, 78, 80, 84, 90, 96, 100, 104, 108, 120

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_abundant(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (num < sum)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_abundant(num))
        cout << endl
             << num << " is abundant number.\n";
    else
        cout << endl
             << num << " is not a abundant number.\n";

    return 0;
}