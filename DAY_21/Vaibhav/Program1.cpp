/*
Q.1 Write a function to rotate an array of integers to the right by a given number of steps. The function should take an array of integers and the number of steps as parameters and modify the array in-place.

Input:
Array: {1, 2, 3, 4, 5}
Steps: 2

Output:
Rotated Array: {4, 5, 1, 2, 3}

Input:
Array: {1, 2, 3, 4, 5}
Steps: 7

Output:
Rotated Array: {4, 5, 1, 2, 3}

Author: Vaibhav
*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

// int *rotate_array(int arr[], int n, int steps)
// {
//     int i, j, temp1, temp2, last;

//     for (i = 0; i < steps; i++)
//     {
//         temp1 = arr[0];
//         arr[0] = arr[n - 1];

//         for (j = 1; j < n; j++)
//         {
//             temp2 = arr[j];
//             arr[j] = temp1;
//             temp1 = temp2;
//         }
//     }
//     return arr;
// }

int *rotate_array(int arr[], int n, int steps)
{
    int i, j, temp;

    for (i = 0; i < steps; i++)
    {
        temp = arr[n - 1];
        for (j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = temp;
    }
    return arr;
}

int main(void)
{
    int i, n, steps;
    int *arr = NULL;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    arr = new int[n];
    if (arr == NULL)
        return -1;

    cout << "\nEnter the data: \n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "\nEnter the number of steps: ";
    cin >> steps;

    rotate_array(arr, n, steps);

    cout << "\nRotated array is: ";
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
