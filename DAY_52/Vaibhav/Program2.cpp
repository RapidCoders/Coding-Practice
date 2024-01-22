/*
Q.2 Write a program to print following pattern.

Input : 5
Output :
1 1 1 1 1
1       1
1       1
1       1
1 1 1 1 1

Author: Suyash
*/

#include <iostream>
#include <string> 
using std::cin;
using std::cout;
using std::endl;
using std::string;

void print_pattern(int n)
{
    int i, j;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || j == n || i == n)
                cout << 1 << " ";
            else 
                cout << "  ";
        }
        cout << endl;
    }
}

int main(void)
{
    int n;

    cout << "\nEnter the number: ";
    cin >> n;

    print_pattern(n);

    return 0;
}
