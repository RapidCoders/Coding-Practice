/*
Q.3 Write a program which accept one number and display factors of that number.

Input : 15
Output : 1 3 5 15

Input : 10
Output : 1 2 5 10

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_factors(int *arr, int n)
{
    int i, j;

    cout << endl;
    for (i = 0; i < n; i++)
    {
        cout << "Factors for number " << arr[i] << " are: ";
        for (j = 1; j <= arr[i]; j++)
        {
            if (arr[i] % j == 0)
                cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{
    int i, n;
    int *arr = NULL;

    cout << "Enter the number of elements: ";
    cin >> n;

    arr = new int[n];
    if (arr == NULL)
        return -1;

    cout << "Enter the data: ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    display_factors(arr, n);

    return 0;
}
