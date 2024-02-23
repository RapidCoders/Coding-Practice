/*
Q.3 Given a non-negative number N and two values L and R. The problem is to toggle the bits in the range L to R in the binary representation of N, i.e, to toggle bits from the rightmost Lth bit to the rightmost Rth bit. A toggle operation flips a bit 0 to 1 and a bit 1 to 0. Print N after the bits are toggled.

Input:
N = 17 , L = 2 , R = 3
Output:
23
Explanation:
(17)10 = (10001)2.  After toggling all
the bits from 2nd to 3rd position we get
(10111)2 = (23)10

Input:
N = 50 , L = 2 , R = 5
Output:
44
Explanation:
(50)10 = (110010)2.  After toggling all
the bits from 2nd to 5th position we get
(101100)2 = (44)10

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void toggle_bit(int *num, int toggle_bit)
{
    (*num) ^= toggle_bit;
}

int toggle_bits(int num, int left, int right)
{
    int i, bit = 1;

    bit = bit << (left - 1);

    for (; left <= right; left++)
    {
        toggle_bit(&num, bit);
        bit <<= 1;
    }
    return num;
}

int main(void)
{
    int l, r, num;

    cout << "\nEnter the number: ";
    cin >> num;

    cout << "\nEnter the position Left and Right (Left < Right): ";
    cin >> l >> r;

    cout << "\nNumber after toggling the bits: " << toggle_bits(num, l, r) << '\n';

    return 0;
}
