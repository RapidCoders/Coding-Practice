/*
Q.2 Write a method to check and return whether given number is duck number or not.

Explanation:
Duck number is another special positive non-zero number that contains zero in it. The digit zero should not be presented at the starting of the number. Zero can be present at any of the positions except the beginning of the number.

Let's understand some examples of Duck numbers.

3210 is a Duck number because it contains zero at the end of the number but not present at the beginning of it.
08237 is not a Duck number because it contains zero at the beginning of it.
7033 is a Duck number because it contains zero at the second position, not at the beginning.
030405 is not a Duck number because it also contains zero in starting of the number.
00153 is also not a Duck number because it contains leading zeros.

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool check_duck(std::string num)
{
    int i;

    for (i = 0; i < num.size(); i++)
    {
        if (i == 0 && num[0] == '0')
            return false;
        if (num[i] == '0')
            return true;
    }
    return false;
}

int main(void)
{
    std::string num;

    cout << "\nEnter the number: ";
    getline(cin, num);

    if (check_duck(num))
        cout << "\nIt is a duck number.\n";
    else
        cout << "\nIt is not a duck number.\n";

    return 0;
}