/*
Q.2 Program to check whether number is Krishnamurthy number or not.

Krishnamurthy number is another special number in Java. A number is said to be Krishnamurthy if the factorial sum of all its digits is equal to that number. Krishnamurthy number is also referred to as a Strong number.

Example : 
Input: 145  
= 1! + 4! + 5!  
= 1 + ( 4 * 3 * 2 * 1 ) + ( 5 * 4 * 3 * 2 * 1 )  
= 1 + 24 + 120  
= 145

Output: True
 
Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_krishnamurthy(int num)
{
    int temp = num;
    int i, digit, sum = 0, fact;

    while (temp != 0)
    {
        fact = 1;
        digit = temp % 10;

        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
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

    if (check_krishnamurthy(num))
        cout << "\nIt is a krishnamurthy number.\n";
    else
        cout << "\nIt is not a krishnamurthy number.\n";

    return 0;
}