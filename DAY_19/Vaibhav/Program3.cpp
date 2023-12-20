/*
Q.3 Write a Program to check if number is Harshad number or not.

Input : num = 21
Output : True

it is divisible by its own sum (1+2) of its digit(2,1)
So it is Harshad's Number

Input : num = 31
Output : False

it is not divisible by its own sum (3+1) of its digit(3,1)
So it is not Harshad's Number

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_harshad(int num)
{
    int sum = 0;
    int temp = num;

    while (temp != 0)
    {
        sum += (temp % 10);
        temp /= 10;
    }

    if (num % sum == 0)
        return true;
    return false;
}

int main()
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_harshad(num))
        cout << "\nIt is harshad number.\n";
    else
        cout << "\nIt is not a harshad number.\n";

    return 0;
}
