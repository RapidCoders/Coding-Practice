/*
Q.3 write a program which takes input number and gives sum of all odd numbers upto that number(Note : Solve using Recursion).

Input: 10
Output: 25

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int sum_odd(int num)
{
    if (num >= 1)
    {
        if (num % 2)
            return num + sum_odd(num - 2);
        else
            return sum_odd(num - 1);
    }
    else
        return 0;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nSummation of odd numbers upto " << num << " is: " << sum_odd(num) << '\n';

    return 0;
}
