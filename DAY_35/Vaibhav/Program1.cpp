/*
Q.1 You are given two sorted arrays, nums1 and nums2, where nums1 has enough space at the end to hold all elements from nums2. Write a program to merge nums2 into nums1 in sorted order.

nums1: [1, 2, 3, 0, 0, 0], m: 3
nums2: [2, 5, 6], n: 3
Expected Output: [1, 2, 2, 3, 5, 6]

nums1: [], m: 0
nums2: [1, 2, 3], n: 3
Expected Output: [1, 2, 3]

nums1: [6, 5, 4, 0, 0, 0], m: 3
nums2: [3, 2, 1], n: 3
Expected Output: [1, 2, 3, 4, 5, 6]

nums1: [1, 2, 2, 0, 0, 0], m: 3
nums2: [2, 3, 4], n: 3
Expected Output: [1, 2, 2, 2, 3, 4]

Author: Vaibhav
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

bool is_ascending(int *array)
{
    if (*array < *(array + 1))
        return true;
    return false;
}

void make_space(int *array, int size, int index)
{
    int i;

    for (i = size - 1; i >= index; i--)
        array[i + 1] = array[i];
}

void reverse(int *array, int size)
{
    int i = 0, j = size - 1;

    while (i < j)
    {
        swap(&array[i], &array[j]);
        i++;
        j--;
    }
}

int *merge_sorted_arrays(int *array1, int n1, int *array2, int n2)
{
    int i, j;

    if (!array1 || !array2)
        return NULL;

    if (is_ascending(array1))
    {
        for (i = 0, j = 0; i < n1; i++)
        {
            if (j == n2)
                break;

            if (array1[i] > array2[j])
            {
                make_space(array1, n1, i);
                array1[i] = array2[j];
                j++;
                i--;
            }
        }
        for (i = ((n1 - n2) + j); i < n1; i++, j++)
            array1[i] = array2[j];
    }
    else
    {
        for (i = 0, j = 0; i < n1; i++)
        {
            if (j == n2)
                break;

            if (array1[i] < array2[j])
            {
                make_space(array1, n1, i);
                array1[i] = array2[j];
                j++;
                i--;
            }
        }
        reverse(array1, n1);
    }
    return array1;
}

int main(void)
{
    int i, size1, size2;
    int *array1 = NULL, *array2 = NULL;

    cout << "\nEnter the number of elements in array1: ";
    cin >> size1;

    cout << "\nEnter the number of elements in array2: ";
    cin >> size2;

    array1 = (int *)malloc(sizeof(int) * (size1 + size2));
    array2 = (int *)malloc(sizeof(int) * size2);
    if (!array1 || !array2)
        return -1;

    cout << "\nEnter " << size1 << " elements in first array: ";
    for (i = 0; i < size1; i++)
        cin >> array1[i];

    cout << "\nEnter " << size2 << " elements in second array: ";
    for (i = 0; i < size2; i++)
        cin >> array2[i];

    merge_sorted_arrays(array1, size1 + size2, array2, size2);

    cout << "\nMerged array is: ";
    for (i = 0; i < size1 + size2; i++)
        cout << array1[i] << " ";
    cout << endl;

    return 0;
}
