/*
Q.1 Write a program to check if a given number is a perfect square.
A perfect square is a non-negative integer that can be expressed as the product of an integer multiplied by itself. In other words, a positive integer (n) is a perfect square if there exists an integer (m) such that (n = m \times m).

For example:

1 is a perfect square because (1 = 1 times 1).
4 is a perfect square because (4 = 2 times 2).
9 is a perfect square because (9 = 3 times 3).
16 is a perfect square because (16 = 4 times 4).

Input: 9
Output: True

Input: 25
Output: True

Input: 7
Output: False

Input: 18
Output: False

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int square(int num)
{
    return num * num;
}

bool check_perfect_square(int num)
{
    int i;

    for (i = 1; i <= num / i; i++)
    {
        cout << i << endl;
        if (num == square(i))
            return true;
    }
    return false;
}

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (check_perfect_square(num))
        cout << endl
             << num << " is perfect square.\n";
    else
        cout << endl
             << num << " is not a pefect square.\n";

    return 0;
}
