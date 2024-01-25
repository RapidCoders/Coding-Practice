/*
Q.3 Write a program to check whether given number is Neon number or not.
Explaination: A positive integer whose sum of digits of its square is equal to the number itself is called a neon number.

Input: num = 9
Output: True.

Input: num = 45
Output: False.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_neon(int num)
{
    int sum = 0, square = num * num;

    while (square)
    {
        sum = sum + (square % 10);
        square /= 10;
    }
    if (sum == num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_neon(num))
        cout << "\nIt is neon number.\n";
    else
        cout << "\nIt is not a neon number.\n";

    return 0;
}
