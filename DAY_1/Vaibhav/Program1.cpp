/*
Q1. Write a program which accept number from the user and check whether it is prime or not.
Input: 31
Output: Is is a prime number.

Input: 20
Output: It is not a prime number.

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;

bool check_prime(int num)
{
    int i;

    if (num <= 1)
        return false;

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main(void)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    if (check_prime(n))
        cout << "It is a prime number.";
    else
        cout << "It is not a prime number.";

    return 0;
}
