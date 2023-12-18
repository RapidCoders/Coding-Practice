/*
Q.2 K Shape Character Pattern Program.

A B C D E F 
A B C D E 
A B C D 
A B C 
A B 
A 
A 
A B 
A B C 
A B C D 
A B C D E 
A B C D E F

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i;
    char c;

    cout << endl;
    for (i = 1; i <= num; i++)
    {
        for (c = 'A'; c <= num - i + 'A'; c++)
            cout << c << " ";
        cout << endl;
    }

    for (i = num; i >= 1; i--)
    {
        for (c = 'A'; c <= num - i + 'A'; c++)
            cout << c << " ";
        cout << endl;
    }
}

int main(void)
{
    int n;

    cout << "Enter the number: ";
    cin >> n;

    print_pattern(n);

    return 0;
}
