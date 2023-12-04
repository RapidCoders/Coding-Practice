/*
Q3. Write a program to find factorial of input number.

Input: 5
Output: 120

Input: 4
Output: 24
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int factorial(int num)
{
    int i;
    int fact = 1;

    for (i = 2; i <= num; i++)
        fact *= i;
    return fact;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nFactorial of " << num << " is " << factorial(num) << endl;

    return 0;
}
