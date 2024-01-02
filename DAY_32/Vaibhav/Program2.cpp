/*
Q.2 Program to copy all elements of one array into another array.

Input  : 1,2,3,4,5
Output : 1,2,3,4,5

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int *copy_array(int *array, int n)
{
    int i;
    int *new_array = NULL;

    if (array == NULL)
        return NULL;

    new_array = new int[n];
    if (new_array == NULL)
        return NULL;

    for (i = 0; i < n; i++)
        new_array[i] = array[i];
    return new_array;
}

int main(void)
{
    int i, x, num;
    int *array = NULL, *ret_copy = NULL;

    cout << "\nEnter the number of elements: ";
    cin >> num;

    array = new int[num];
    if (array == NULL)
        return -1;

    cout << "\nEnter the data: ";
    for (i = 0; i < num; i++)
        cin >> array[i];

    ret_copy = copy_array(array, num);

    cout << "\nCopied elements in another array are: ";
    if (ret_copy != NULL)
    {
        for (i = 0; i < num; i++)
            cout << ret_copy[i] << " ";
    }

    return 0;
}