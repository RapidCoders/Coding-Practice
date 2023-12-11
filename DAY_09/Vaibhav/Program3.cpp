/*
Q.3 Write a program which accept number(num<=10) from user and display multiplication table in below pattern.
Input: 5
Output:

01 02 03 04 05 
02 04 06 08 10 
03 06 09 12 15 
04 08 12 16 20 
05 10 15 20 25 
06 12 18 24 30 
07 14 21 28 35 
08 16 24 32 40 
09 18 27 36 45 
10 20 30 40 50

Input: 10
Output:

01 02 03 04 05 06 07 08 09 10 
02 04 06 08 10 12 14 16 18 20 
03 06 09 12 15 18 21 24 27 30
04 08 12 16 20 24 28 32 36 40
05 10 15 20 25 30 35 40 45 50
06 12 18 24 30 36 42 48 54 60
07 14 21 28 35 42 49 56 63 70
08 16 24 32 40 48 56 64 72 80
09 18 27 36 45 54 63 72 81 90
10 20 30 40 50 60 70 80 90 100

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_tables(int num)
{
    int i, j;
    int mult = 1;

    cout << endl;
    
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= num; j++)
        {
            mult = i * j;

            if (i == 1)
            {
                if (j >= 1 && j <= 9)
                    cout << 0 << j << " ";
                else
                    cout << j << " ";
            }
            else if (mult >= 1 && mult <= 9)
                cout << 0 << mult << " ";
            else
                cout << mult << " ";
        }
        cout << endl;
    }
}

int main()
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    display_tables(num);

    return 0;
}
