/*
Q.2 Program to print the elements of an array present on odd position.

Input: arr = [1, 2, 3, 4, 5]  

Output: Elements of given array present on odd position: 2 4

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void display_odd_pos(int *arr, int n)
{
    int i;

    cout << "Elements of given array present on odd position: ";
    for (i = 0; i < n; i++)
    {
        if (i % 2 != 0)
            cout << arr[i] << " ";
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

    display_odd_pos(arr, n);

    return 0;
}
