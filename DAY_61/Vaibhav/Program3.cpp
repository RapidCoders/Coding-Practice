/*
Q.3 Write a program to Sort First half in Ascending and Second half of array in descending order.

Input: arr[] = {3, 2, 4, 1, 10, 30, 40, 20};
Output: 1 2 3 4 40 30 20 10

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void sort(int *array, int size, char type = 'I')
{
    int i, j;

    for (i = 1; i <= size; i++)
    {
        for (j = 0; j < size - i; j++)
        {
            if (type == 'I' || type == 'i')
            {
                if ((array[j] > array[j + 1]))
                    swap(&array[j], &array[j + 1]);
            }
            else if (type == 'D' || type == 'd')
            {
                if (array[j] < array[j + 1])
                    swap(&array[j], &array[j + 1]);
            }
            else
                cout << "\nPlease enter the valid type!\n";
        }
    }
}

void asc_and_desc(int *array, const int size)
{
    sort(array, size / 2);
    sort(array + (size / 2), size / 2, 'D');
}

int main(void)
{
    int i, n, *array = nullptr;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    array = new int[n];
    if (array == nullptr)
        return 1;

    cout << "\nEnter the data: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    asc_and_desc(array, n);

    cout << "\nArray after sorting is: ";
    for (i = 0; i < n; i++)
        cout << array[i] << " ";

    return 0;
}
