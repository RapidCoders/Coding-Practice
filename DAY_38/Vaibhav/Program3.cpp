/*
Q.3 write Program for Octal to Decimal Conversion.

Input: octal = 462
Output:  306

Input: octal = 206
Output: 134

Author: Shreyash
*/

#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::string;

int oct_to_dec(int num)
{
    int x = 0, ans = 0;

    while (num)
    {
        ans += ((num % 10) * pow(8, x));
        num /= 10;
        x++;
    }
    return ans;
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nDecimal form of " << num << " is " << oct_to_dec(num) << endl;

    return 0;
}
