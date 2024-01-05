/*
Q.3 Program to Convert Decimal to Hexadecimal.

Input:  num = 10
Output: a.

Input:  num =15
Output: f.

Input:  num = 289
Output: 121.

Author: Shreyash
*/

#include <stdio.h>

void dec_hexadec(int num)
{
    printf("\nDecimal: %d\nHexadecimal: %x\n", num, num);
}

int main(void)
{
    int num;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    dec_hexadec(num);

    return 0;
}