/*
Q.2 Program to check whether number is pronic or not.

A number is said to be pronic number if it is a product of two consecutive numbers.

For examples:
6 = 2 x 3
72 = 8 x 9

Input : 6
Output : It is a pronic number

Input : 7
Output : It is not a pronic number

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_pronic(int num)
{
    int i;

    for (i = 1; i < num / i; i++)
    {
        if (i * (i + 1) == num)
            return true;
    }
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_pronic(num))
        cout << "\nIt is a pronic number.\n";
    else
        cout << "\nIt is not a pronic number.\n";

    return 0;
}
