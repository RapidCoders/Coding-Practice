/*
Q.3 Given two numbers M and N. The task is to find the position of the rightmost different bit in the binary representation of numbers. If both M and N are the same then return -1 in this case.

Input:
M = 11, N = 9
Output:
2
Explanation:
Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.

Input:
M = 52, N = 4
Output:
5
Explanation:
Binary representation of the given numbers are: 110100 and 0100, 5th-bit from right is different.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int find_different_bit(int m, int n)
{
    int count_bit = 0;

    if (m == n)
        return -1;

    while ((m != 0) || (n != 0))
    {
        count_bit++;

        if ((m % 2) != (n % 2))
            return count_bit;
        m = m / 2;
        n = n / 2;
    }
    
    return count_bit;
}

int main(void)
{
    int n, m, result;

    cout << "\nEnter first number: ";
    cin >> m;

    cout << "\nEnter second number: ";
    cin >> n;

    result = find_different_bit(m, n);

    if (result == -1)
    {
        cout << "\nThere is no difference in bit.\n";
        exit(EXIT_SUCCESS);
    }

    cout << '\n'
         << result;

    if (result == 1)
        cout << "st ";
    else if (result == 2)
        cout << "nd ";
    else if (result == 3)
        cout << "rd ";
    else
        cout << "th ";
    cout << "bit is different from right.\n";

    return 0;
}
