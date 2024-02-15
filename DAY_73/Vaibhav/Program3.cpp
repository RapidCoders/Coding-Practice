/*
Q.3 Write a program to Print given pattern .

Input : 5
Output :
         A B C D E F G H I
           A           G
             A       E
               A   C
                 A

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void print_pattern(int num)
{
    int i, j;
    char c;

    for (i = 1; i <= num; i++)
    {
        c = 'A';

        for (j = 1; j <= ((num * 2) - 1); j++)
        {
            if (i == 1)
                cout << c << ' ';
            else if (j == i)
            {
                c = 'A';
                cout << c << ' ';
            }
            else if (j == ((num * 2) - i))
                cout << c << ' ';
            else
                cout << "  ";
            c++;
        }
        cout << '\n';
    }
}

int main(void)
{
    int num;

    cout << "\nEnter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}
