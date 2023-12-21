/*
Q.3 Write a Program which accept number and check whether it is Automorphic Number or Not.

Input : num = 5
Output : True
Explaination: 5^2 = 25
Square ends in the same digit as the number itself.

Input : num = 7
Output : False

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int square(int num)
{
    return num * num;
}

bool check_automorphic(int num)
{
    int i;
    int sqr = square(num);

    while (sqr != 0 || num != 0)
    {
        if (num == 0)
            break;

        if ((sqr % 10) != (num % 10))
            return false;

        sqr /= 10;
        num /= 10;
    }
    return true;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_automorphic(num))
        cout << "\nIt is an automorphic number.\n";
    else
        cout << "\nIt is not an automorphic number.\n";

    return 0;
}
