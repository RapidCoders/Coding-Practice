/*
Q.1 You are given two sorted arrays nums1 and nums2, where nums1 has enough space at the end to hold additional elements from nums2. Merge nums2 into nums1 in sorted order.

Input: nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
Expected Output: [1, 2, 2, 3, 5, 6]

Input: nums1 = [1, 2, 3], m = 3, nums2 = [], n = 0
Expected Output: [1, 2, 3]

Input: nums1 = [0, 0, 0], m = 0, nums2 = [2, 5, 6], n = 3
Expected Output: [2, 5, 6]

Input: nums1 = [1, 3, 5, 0, 0, 0], m = 3, nums2 = [2, 4, 6], n = 3
Expected Output: [1, 2, 3, 4, 5, 6]

Input: nums1 = [1, 2, 2, 3, 0, 0], m = 4, nums2 = [2, 5, 6], n = 3
Expected Output: [1, 2, 2, 2, 3, 5]

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;

int *merge_array(int *arr1, int n1, int *arr2, int n2)
{
    int i, j;

    for (i = n1, j = 0; j < n2; j++, i++)
        arr1[i] = arr2[j];
    return arr1;
}

int main(void)
{
    int i, n1, n2;
    int *arr1 = nullptr, *arr2 = nullptr;

    cout << "\nEnter the number of elements for first array: ";
    cin >> n1;

    cout << "\nEnter the number of elements for second array: ";
    cin >> n2;

    arr1 = new int[n1 + n2];
    if (arr1 == nullptr)
        return EXIT_FAILURE;

    arr2 = new int[n2];
    if (arr2 == nullptr)
        return EXIT_FAILURE;

    cout << "\nEnter the data in first array: ";
    for (i = 0; i < n1; i++)
        cin >> arr1[i];

    cout << "\nEnter the data in second array: ";
    for (i = 0; i < n2; i++)
        cin >> arr2[i];

    merge_array(arr1, n1, arr2, n2);

    cout << "\nArray after merged: ";
    for (i = 0; i < n1 + n2; i++)
        cout << arr1[i] << ' ';
    cout << '\n';

    return 0;
}
