/*
Q.2 Write a program to check whether given number is Perfect number or not.

Explanation:
Let's take the number 496 and check it is a perfect number or not.

First, we find the factors of 496 i.e. 1, 2, 4, 8, 16, 31, 62, 124, and 248. Let's find the sum of factors (1 + 2 + 4 + 8 + 16 + 31 + 62 + 124 +248 = 496). We observe that the sum of factors is equal to the number itself. Hence, the number 496 is a perfect number.

Input : Enter the number : 28
Output : 28 is a perfect number.

Input : Enter the number : 4558
Output : 4558 is not a perfect number.

Author: Suyash
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

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_perfect(num))
        cout << endl
             << num << " is perfect number.\n";
    else
        cout << endl
             << num << " is not a perfect number.\n";

    return 0;
}