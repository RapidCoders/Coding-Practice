// Q.1 You are given two sorted arrays, nums1 and nums2, where nums1 has enough space at the end to hold all elements from nums2. Write a program to merge nums2 into nums1 in sorted order.
// nums1: [1, 2, 3, 0, 0, 0], m: 3
// nums2: [2, 5, 6], n: 3
// Expected Output: [1, 2, 2, 3, 5, 6]

// nums1: [], m: 0
// nums2: [1, 2, 3], n: 3
// Expected Output: [1, 2, 3]

// nums1: [6, 5, 4, 0, 0, 0], m: 3
// nums2: [3, 2, 1], n: 3
// Expected Output: [1, 2, 3, 4, 5, 6]

// nums1: [1, 2, 2, 0, 0, 0], m: 3
// nums2: [2, 3, 4], n: 3
// Expected Output: [1, 2, 2, 2, 3, 4]
// Author: Vaibhav


#include <iostream>
#include <vector>
using namespace std;

void mergesortedarray(vector<int> nums, vector<int> nums1, int count)
{

    for (int i = 0; i < nums1.size(); i++)
    {
        if(nums[nums.size() - 1] <= nums1[i]){
            nums[nums.size()] = nums1[i];
            nums[nums.size()+1] = nums[nums.size() - 1];
        }
    }
    int temp;
    for(int i = 0;i<nums.size();i++){
        for(int j = 0;j<nums.size();j++){
            if(nums[i]<nums[j]){
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }

    for(int k : nums){
        cout<<k<<" ";
    }
}

int main()
{
    vector<int> nums;
    int num;
    cout << "How Many Element u want to insert in array :";
    cin >> num;
    int temp;
    for (int i = 0; i < num; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
    int count = 0;
    for (int i : nums)
    {
        if (i == 0)
        {
            nums.pop_back();
            count++;
        }
    }
    vector<int> nums1;
    int num1;
    cout << "How Many Element u want to insert in array :";
    cin >> num1;
    int temp1;
    for (int i = 0; i < num1; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    mergesortedarray(nums, nums1, count);

    return 0;
}

