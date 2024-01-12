/*
Q.2 Program to Check Disarium number

Input:
  num = 135

Output:
  1^1 + 3^2 + 5^3 = 135
  135 is a disarium number

Author: Suyash
*/

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int count_digits(int num)
{
    int digit_count = 0;

    while (num)
    {
        digit_count++;
        num /= 10;
    }
    return digit_count;
}

bool check_disarium(int num)
{
    int sum = 0, temp = num;
    int power = count_digits(num);

    while (temp)
    {
        sum += pow(temp % 10, power--);
        temp /= 10;
    }

    return (num == sum) ? true : false;
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
