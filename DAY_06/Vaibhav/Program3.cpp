/*
Q3. Write a program which accept number and Replace All 0’s With 1.

Input: 900120678
Output:911121678

Input: 84850060
Output:84851161

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int reverse(int num)
{
    int reversed_num = 0;

    while (num != 0)
    {
        reversed_num = (reversed_num * 10) + (num % 10);
        num /= 10;
    }
    return reversed_num;
}

int replace(long int num)
{
    int digit;
    long int new_num = 0;

    while (num != 0)
    {
        digit = num % 10;

        if (digit == 0)
            new_num = (new_num * 10) + 1;
        else 
            new_num = (new_num * 10) + digit;
        num /= 10;
    }
    return reverse(new_num);
}

int main(void)
{
    int n;

    cout << "\nEnter the number: ";
    cin >> n;

    cout << "\nNumber after replaced all 0's with 1: " << replace(n) << endl;

    return 0;
}
