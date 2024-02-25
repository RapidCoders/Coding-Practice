// Q.1 You are given two sorted arrays nums1 and nums2, where nums1 has enough space at the end to hold additional elements from nums2. Merge nums2 into nums1 in sorted order.
// Input: nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
// Expected Output: [1, 2, 2, 3, 5, 6]

// Input: nums1 = [1, 2, 3], m = 3, nums2 = [], n = 0
// Expected Output: [1, 2, 3]

// Input: nums1 = [0, 0, 0], m = 0, nums2 = [2, 5, 6], n = 3
// Expected Output: [2, 5, 6]

// Input: nums1 = [1, 3, 5, 0, 0, 0], m = 3, nums2 = [2, 4, 6], n = 3
// Expected Output: [1, 2, 3, 4, 5, 6]

// Input: nums1 = [1, 2, 2, 3, 0, 0], m = 4, nums2 = [2, 5, 6], n = 3
// Expected Output: [1, 2, 2, 2, 3, 5]
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(vector<int>arr1,vector<int>arr2)
{
    std::vector<int> result;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) 
    {
        if (arr1[i] < arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }
    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
    
}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int num1;
    cin >> num1;
    for(int i = 0; i<num;i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    vector<int>arr1;
    for(int i = 0; i<num1;i++)
    {
        int temp;
        cin >> temp;
        arr1.push_back(temp);
    }

    vector<int>marr = merge_sort(arr,arr1);
    for(int i:marr)
    {
        cout << i << " ";
    }
    return 0;
}
