/*
Q.2 Program to print the elements of an array present on even position

Input:
arr = [1, 2, 3, 4, 5]
Output:
Elements of given array present on even position:
2
4

Author: Suyash
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print_even_pos_ele(int *nums, int size)
{
    int i;

    cout << "\nElements on even position: ";
    for (i = 0; i < size; i++)
    {
        if (((i + 1) % 2) == 0)
            cout << nums[i] << " ";
    }
}

int main(void)
{
    int i, n;
    int *nums = NULL;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    nums = new int[n];
    if (nums == NULL)
        return -1;

    cout << "\nEnter the data:\n";
    for (i = 0; i < n; i++)
        cin >> nums[i];

    print_even_pos_ele(nums, n);

    return 0;
}
