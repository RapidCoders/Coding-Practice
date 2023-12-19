/*
Q.3 Write a program which accept number from user and state whether it is perfect number or not.

Input : num = 14
Output : False

Input : num = 6
Output : True

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_perfect(int num)
{
    int i, sum = 0;

    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    if (check_perfect(num))
        cout << endl << num << " is perfect number.\n";
    else
        cout << endl << num << " is not a perfect number.\n";

    return 0;
}
