/*
Q.3 Write a program to check whether given number is Xylem or Phloem Number.
Explaination:
a) Extream digits means first and last digits.
b) Mean digits means other than extream digits.

Input: Enter a number: 825122
Output:
The sum of extreme digits: 10
The sum of mean digits: 10
825122 is a xylem number.

Input: Enter a number: 761312
Output:
The sum of extreme digits: 9
The sum of mean digits: 11
761312 is a phloem number.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int count_digits(int num)
{
    int count = 0;

    while (num)
    {
        count++;
        num /= 10;
    }
    return count;
}

bool check_xylem(int num)
{
    int extream_sum = num % 10, mean_sum = 0;
    num /= 10;

    while (num)
    {
        mean_sum += (num % 10);
        num /= 10;
        if (count_digits(num) == 1)
            break;
    }
    extream_sum += num;

    return (extream_sum == mean_sum) ? true : false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_xylem(num))
        cout << endl
             << num << " is xylem number.\n";
    else
        cout << endl
             << num << " is phloem number.\n";

    return 0;
}
