/*
Q.3 write a Program to get number is even or odd(Note You are not allowed to use directly % operator).

Input : num = 44
Output : Even

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

bool check_even(int num)
{
    if (num & 1)
        return false;
    return true;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_even(num))
        cout << "\nIt is an even number.\n";
    else
        cout << "\nIt is an odd number.\n";

    return 0;
}
