/*
Q.1 Write a program to count the number of set bits (1s) in the binary representation of a given non-negative integer.

Input:  0
Output: 0

Input:  7
Output: 3

Input:  123
Output: 6

Input:  1024
Output: 1

Input:  65535
Output: 16

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int count_set_bits(int num)
{
    int mask = 1, count = 0;

    while (num)
    {
        if (num & mask)
            count++;
        num >>= 1;
    }
    return count;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nCount of set bits in number " << num << " is " << count_set_bits(num) << '\n';

    return 0;
}
