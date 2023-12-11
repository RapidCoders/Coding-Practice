/*
Q.2 Program to display all prime numbers from 1 to n

Input: n = 11
Output: 2 3 5 7 11

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_prime_upto_n(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
                break;
        }
        if (i == j)
            cout << j << " ";
    }
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    display_prime_upto_n(num);

    return 0;
}
