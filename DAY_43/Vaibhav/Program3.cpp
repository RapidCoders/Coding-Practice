/*
Q.3 write Recursive program to Calculate Factorial of given number.

Input: n = 5
Output: 120

Input: n = 7
Output: 5040

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int factorial(int num)
{
    if (num == 0)
        return 1;
    return factorial(num - 1) * num;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nFactorial of " << num << " is: " << factorial(num) << endl;

    return 0;
}
