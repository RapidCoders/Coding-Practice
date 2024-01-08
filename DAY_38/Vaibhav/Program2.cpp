/*
Q.2 Write a method to check and return whether given number is Buzz Number or not.

Explanation:
Buzz number is another special number in Java that ends with digit 7 or divisible by 7. Unlike Prime and Armstrong numbers, the Buzz number is not so popular and asked by the interviewers.

In simple words, a number is said to be Buzz if it ends with 7 or is divisible by 7.

Let's take some examples of Buzz numbers.

42 is a Buzz number because it is divisible by 7.
107 is a Buzz number because it ends with 7.
147 is a Buzz number because it ends with 7 and also divisible by 7.
134 is not a Buzz number because it is neither end with 7 nor divisible by 7.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_buzz(int num)
{
    if (((num % 7) == 0) || ((num % 10) == 7))
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_buzz(num))
        cout << "\nIt is a buzz number.\n";
    else
        cout << "\nIt is not a buzz number.\n";

    return 0;
}
