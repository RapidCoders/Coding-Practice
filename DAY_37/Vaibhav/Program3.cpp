/*
Q.3 write Program to find the LCM of two numbers

Input:   num1 = 12
         num2 = 14
Output: 84

Input:   num1 = 55
         num2 = 15
Output: 165

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int lcm(int num1, int num2)
{
    int count = (num1 > num2) ? num1 : num2;

    while (1)
    {
        if (count % num1 == 0 && count % num2 == 0)
            return count;
        count++;
    }
    return -1;
}

int main(void)
{
    int num1, num2;

    cout << "\nEnter the first number: ";
    cin >> num1;

    cout << "\nEnter the second number: ";
    cin >> num2;

    cout << "\nLCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2) << endl;

    return 0;
}