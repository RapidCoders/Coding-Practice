/*
Q.3 write a Program to Replace each element by its rank given in array.

There is an array of n elements, replace each element of the array by its corresponding rank. The minimum value element will have the highest rank.

Input : arr[] = { 100, 2, 70, 12 , 90 };
Output : 5 1 3 2 4

Author: Shreyash
*/

#include <iostream>
using std::cin;
using std::cout;

int find_min(int *array, int size)
{
    int i, min, min_index;

    for (i = 0; i < size; i++)
    {
        if (array[i] != -1)
        {
            min = array[i];
            min_index = i;
            break;
        }
    }

    for (i = 0; i < size; i++)
    {
        if ((array[i] < min) && (array[i] != -1))
        {
            min = array[i];
            min_index = i;
        }
    }
    return min_index;
}

int *find_ranks(int *array, int size)
{
    int i, index;
    int *temp = new int[size], *rank = new int[size];
    if (rank == nullptr || temp == nullptr)
        return nullptr;

    for (i = 0; i < size; i++)
        temp[i] = array[i];

    for (i = 1; i <= size; i++)
    {
        index = find_min(temp, size);
        temp[index] = -1;
        rank[index] = i;
    }
    return rank;
}

int main(void)
{
    int i, n, *array = nullptr, *result = nullptr;

    cout << "\nEnter the number of elements: ";
    cin >> n;

    array = new int[n];
    if (array == nullptr)
        return -1;

    cout << "\nEnter the data: ";
    for (i = 0; i < n; i++)
        cin >> array[i];

    result = find_ranks(array, n);

    cout << "\nRank of the elements:\n";
    for (i = 0; i < n; i++)
        cout << array[i] << ": " << result[i] << '\n';

    return 0;
}
