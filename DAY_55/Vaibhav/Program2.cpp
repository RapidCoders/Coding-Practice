/*
Q.2 Program to determine whether a given number is a Deficient number.

Explanation: The deficient number can be defined as the number for which the sum of the proper divisors is lesser than the number itself. For example, the number 21 with its proper divisors (1, 3 and 7) has sum (11) lesser than itself.

Input: Enter the number : 21
Output: The number is deficient.

Input: Enter the number : 12
Output: The number is not deficient.

Input: Enter the number : 23
Output:The number is deficient.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_deficient(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum < num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_deficient(num))
        cout << "\nIt is deficient number.\n";
    else
        cout << "\nIt is not a deficient number.\n";

    return 0;
}
