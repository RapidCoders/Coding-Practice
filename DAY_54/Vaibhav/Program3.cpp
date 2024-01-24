/*
Q.3 Write a program to Find GCD of Two Numbers.

Explaination:
Factors of 12: 1, 2, 3, 4, 6, 12
Factors of 8: 1, 2, 4, 8
Common Factors: 1, 2, 4

Greatest Common Factor: 4
Hence, the GCF of 12 and 8 is 4.

Input: num1 = 55
       num2 = 70
Output: the GCF of 55 and 70 is 5.

Input: num1 = 34
       num2 = 76
Output: the GCF of 34 and 76 is 2.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int find_gcd(int num1, int num2)
{
    int i, gcd;

    for (i = 1; i <= num1 / 2 || i <= num2 / 2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
            gcd = i;
    }
    return gcd;
}

int main(void)
{
    int num1, num2;

    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nGCD of " << num1 << " and " << num2 << " is: " << find_gcd(num1, num2) << endl;

    return 0;
}
