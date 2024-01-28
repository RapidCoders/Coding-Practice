// Q.1 Write a program that takes an array of integers as input and partitions it into two subarrays, where the first subarray contains all the even numbers and the second subarray contains all the odd numbers. The order of elements within each subarray should remain the same as in the original array.
// Input: [3, 6, 8, 2, 5, 7]
// Expected Output: [[6, 8, 2], [3, 5, 7]]

// Input: [2, 4, 6, 8]
// Expected Output: [[2, 4, 6, 8], []]

// Input: [1, 3, 5, 7, 9]
// Expected Output: [[], [1, 3, 5, 7, 9]]

// Input: [-3, 6, -8, 2, 5, -7]
// Expected Output: [[6, -8, 2], [-3, 5, -7]]

// Input: []
// Expected Output: [[], []]
// Author: Vaibhav


#include<iostream>
#include<vector>
using namespace std;

void even_odd_div(vector<int>arr)
{
    vector<int>even;
    vector<int>odd;
    for (int i = 0;i < arr.size();i++)
    {
        if(arr[i]%2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    cout<<"[[";
    for(int i:even)
    {
        cout<<" "<<i<<" ";
    }
    cout<<"],[";
    for(int j:odd)
    {
        cout<<" "<<j<<" ";
    }
    cout<<"]]";
}
int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for (int i = 0;i < num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    even_odd_div(arr);
    return 0;
}
