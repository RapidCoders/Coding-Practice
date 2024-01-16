/*
Q.1 Write a function that determines if a given positive integer is a power of four.

Input: 16
Output: true
Explanation: 16 is 4^2.

Input: 64
Output: true
Explanation: 64 is 4^3.

Input: 5
Output: false
Explanation: 5 is not a power of four.

Input: 1
Output: true
Explanation: 1 is 4^0.

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int power(int num, int pow)
{
    int i, result = 1;

    for (i = 0; i < pow; i++)
        result *= num;
    return result;
}

bool check_power_of_four(int num)
{
    int i = 0, result = 0;

    while (result < num)
    {
        result = power(4, i++);

        if (result == num)
            return true;
    }
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_power_of_four(num))
        cout << endl
             << num << " is power of four.\n";
    else
        cout << endl
             << num << " is not a power of four.\n";

    return 0;
}
