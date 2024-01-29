/*
Q.3 Write a program to check the number is Strontio Number or not.

Explanation: Strontio numbers are those four digits numbers when multiplied by 2 give the same digit at the hundreds and tens place. Remember that the input number must be a four-digit number.

1386*2 = 2772, we observe that at tens and hundreds place digits are the same. Hence, 1386 is a strontio number.
1221*2 = 2442, digits at tens and hundreds place are the same. Hence, 1221 is a strontio number.

Some other strontio numbers are 1111, 2222, 3333, 4444, 5555, 6666, 7777, 8888, 9999, 1001, 2002, 3003, etc.

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

bool check_strontio(int num)
{
    int tenth_place, hundredth_place;

    if (!(num >= 1000 && num <= 9999))
        return false;

    num *= 2;

    num /= 10;
    tenth_place = num % 10;

    num /= 10;
    hundredth_place = num % 10;

    if (tenth_place == hundredth_place)
        return true;
    return false;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    if (check_strontio(num))
        cout << "\nIt is strontio number.\n";
    else
        cout << "\nIt is not a strontio number.\n";

    return 0;
}
