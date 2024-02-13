/*
Q.1 Write a program that takes two arrays of integers as input and returns True if one array is a rotation of the other array, and False otherwise. A rotation occurs when elements are shifted circularly to the left or right.

Input: [1, 2, 3, 4, 5], [1, 2, 3, 4, 5]
Expected Output: True

Input: [1, 2, 3, 4, 5], [4, 5, 1, 2, 3]
Expected Output: True

Input: [1, 2, 3, 4, 5], [3, 4, 5, 1, 2]
Expected Output: True

Input: [1, 2, 3, 4, 5], [1, 2, 3, 4, 6]
Expected Output: False

Input: [], []
Expected Output: True

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::vector;

bool check_rotation(vector<int> nums1, vector<int> nums2)
{
    int i, j = 0;
    int length = nums1.size();

    if (length != nums2.size())
        return false;

    if (length == 0)
        return true;

    while (nums2[j] != nums1[0])
        j++;

    for (i = 0; i < length; i++, j++)
    {
        if (j == length)
            j = 0;

        if (nums1[i] != nums2[j])
            return false;
    }
    return true;
}

int main(void)
{
    int i, x, n;
    vector<int> nums1, nums2;

    cout << "\nEnter the number of elements for first array: ";
    cin >> n;

    cout << "\nEnter the data into first array: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums1.push_back(x);
    }

    cout << "\nEnter the number of elements for second array: ";
    cin >> n;

    cout << "\nEnter the data into second array: ";
    for (i = 1; i <= n; i++)
    {
        cin >> x;
        nums2.push_back(x);
    }

    if (check_rotation(nums1, nums2))
        cout << "\nArray 2 is rotation of Array 1.\n";
    else
        cout << "\nArray 2 is not rotation of Array 1.\n";

    return 0;
}
