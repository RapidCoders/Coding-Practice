/*
Write a program which accept range from user and return addition of all even numbers in between that range. (Range should contains positive numbers only)

Input : 23 30
Output : 108

Input : -10 2
Output : Invalid range

Input : 90 18
Output : Invalid range

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int sum_even_in_range(int start, int end)
{
    int sum = 0;

    if (start > end || start < 0)
        return -1;

    for (; start <= end; start++)
    {
        if (start % 2 == 0)
            sum += start;
    }
    return sum;
}

int main(void)
{
    int a, b, ret;

    cout << "Enter starting point and ending point: ";
    cin >> a >> b;

    ret = sum_even_in_range(a, b);

    if (ret == -1)
        cout << "Invalid range!\n";
    else
        cout << "Sum of even numbers in range is: " << ret << endl;

    return 0;
}
