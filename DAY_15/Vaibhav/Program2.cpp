/*


Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_pattern(int num)
{
    int i, j;
    char c = 'A';

    cout << endl;
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
            cout << c++ << " ";
        cout << endl;
    }
}   

int main(void)
{
    int num;

    cout << "Enter the number: ";
    cin >> num;

    display_pattern(num);

    return 0;
}
