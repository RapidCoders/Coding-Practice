/*
Q.2 Program to print all Disarium numbers between 1 and 100

Explanation: A number is said to be the Disarium number when the sum of its digit raised to the power of their respective positions is equal to the number itself.

For example, 175 is a Disarium number as follows
1^1 + 7^2 + 5^3 = 1 + 49 + 125 = 175

Output :
Disarium numbers between 1 and 100 are
1 2 3 4 5 6 7 8 9 89

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;

int power(int x, int y)
{
    int i, pow = 1;

    for (i = 1; i <= y; i++)
    {
        pow *= x;
    }
    return pow;
}

int digit_counter(int num)
{
    int counter = 0;

    while (num)
    {
        counter++;
        num /= 10;
    }
    return counter;
}

bool check_disarium(int num)
{
    int sum = 0, temp = num;
    int exponent = digit_counter(num);

    while (temp)
    {
        sum += power(temp % 10, exponent--);
        temp /= 10;
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

    if (check_disarium(num))
        cout << "\nIt is disarium number.\n";
    else
        cout << "\nIt is not a disarium number.\n";

    return 0;
}
