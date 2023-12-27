/*
Q.3 Write program which to print the below pattern.

Input: 4
Output:
* * * *

  * * * *

    * * * *

      * * * *

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_pattern(int num)
{
    int i, j, k;

    cout << endl;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i - 1; j++)
            cout << "  ";
        for (k = 1; k <= num; k++)
            cout << "* ";
        cout << endl;
    }
}

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    print_pattern(num);

    return 0;
}