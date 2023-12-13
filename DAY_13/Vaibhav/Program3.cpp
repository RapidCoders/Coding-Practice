/*
Q.3 Write a program which accept two numbers and check it is Friendly Pair or not.

Input :num1 = 30
       num2 = 140
Output : 30 & 140 are friendly pairs.

Input :num1 = 15
       num2 = 20
Output : 15 & 20 are not friendly pairs.

Friendly pair Explanation :(Sum of divisors of num1)/num1= (Sum of divisors of num2)/num2

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_friendly_pair(int num1, int num2)
{
    int i, num1_sum = 0, num2_sum = 0;

    for (i = 1; i <= num1 / 2 || i <= num2 / 2; i++)
    {
        if (num1 % i == 0 && i <= num1 / 2)
            num1_sum += i;
        if (num2 % i == 0 && i <= num2 / 2)
            num2_sum += i;
    }

    if (((num1_sum + num1) / num1) == ((num2_sum + num2) / num2))
        return true;
    return false;
}

int main(void)
{
    int n1, n2;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    if (check_friendly_pair(n1, n2))
        cout << endl
             << n1 << " & " << n2 << " are friendly pairs.\n";
    else
        cout << endl
             << n1 << " & " << n2 << " are not friendly pairs.\n";

    return 0;
}
