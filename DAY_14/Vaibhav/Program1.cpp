/*
Q.1 Write a program which accept one number from user and check whether it is palindrome or not.

Input : 121
Output : Palindrome

Input : 45654
Output : Palindrome

Input : 98765
Output : Not Palindrome

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_palindrome(int num)
{
    int temp = num;
    int new_num = 0;

    while (temp != 0)
    {
        new_num = new_num * 10 + (temp % 10);
        temp /= 10;
    }
    if (num == new_num)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_palindrome(num))
        cout << endl << num << " is palindrome number.\n";
    else
        cout << endl << num << " is not a palindrome number\n";

    return 0;
}
