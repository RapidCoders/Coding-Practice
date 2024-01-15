/*
Q.1 Write a program to find the largest prime palindrome less than or equal to a given number n. The program should take the input n and output the largest prime palindrome found.

Input: 50
Output: 11

Input: 500
Output: 383

Input: 1000
Output: 929

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_prime(int num)
{
    int i;

    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int prime_palindrome(int num)
{
    int i, temp, reversed_num, prime_palidrome_num = 0;

    for (i = 1; i <= num; i++)
    {
        temp = i;
        reversed_num = 0;

        if (check_prime(temp))
        {
            while (temp)
            {
                reversed_num = (reversed_num * 10) + (temp % 10);
                temp /= 10;
            }
            if (reversed_num == i)
                prime_palidrome_num = i;
        }
    }
    return prime_palidrome_num;
}

int main(void)
{
    int num, result;

    cout << "\nEnter the number: ";
    cin >> num;

    result = prime_palindrome(num);

    cout << "\nBiggest Prime and Palindrome number between 1 and " << num << " is: " << result << endl;

    return 0;
}
