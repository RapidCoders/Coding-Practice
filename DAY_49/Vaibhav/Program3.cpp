/*
Q.3 Write a Program to check whether given input number is Emirp Number or not.

Explanation:A number is called an emirp number if we get another prime number on reversing the number itself. In other words, an emirp number is a number that is prime forwards or backward. It is also known as twisted prime numbers.

Input: n = 46
Output:False

Input: n = 1201
Output:True

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_prime(int num)
{
    int i;

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int reverse_num(int num)
{
    int reversed_num = 0;

    while (num)
    {
        reversed_num = (reversed_num * 10) + num % 10;
        num /= 10;
    }
    return reversed_num;
}

bool check_emirp(int num)
{
    if (!check_prime(num))
        return false;

    num = reverse_num(num);

    if (!check_prime(num))
        return false;
    return true;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_emirp(num))
        cout << "\nIt is emirp number.\n";
    else
        cout << "\nIt is not an emirp number.\n";

    return 0;
}
