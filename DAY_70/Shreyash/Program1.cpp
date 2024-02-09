// Q.1 Write a function that takes a list of integers as input and returns the count of peak elements in the list. A peak element is defined as an element that is greater than its adjacent neighbors.
// Input: [1, 3, 2, 4, 1, 5, 6]
// Expected Output: 2  (3, 4 are peaks)

// Input: [1, 2, 3, 4, 5]
// Expected Output: 0 (No peak)

// Input: [5, 3, 6, 8, 4]
// Expected Output: 1 (8 is peak)

// Input: [10]
// Expected Output: 0 (No peak)

// Input: [2, -1, 0, -3, 5]
// Expected Output: 1 (0 is peak)
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

int count_peak(vector<int>arr)
{
    int counter = 0;
    for(int i = 1;i < arr.size()-1;i++)
    {
        if(arr[i] > arr[i + 1] && arr[i] > arr[i - 1])
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for(int i = 0;i < num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    cout << count_peak(arr);
    return 0;
}
