// Q.3 Given an array arr[] and an integer K where K is smaller than size of array, the task is to find the Kth smallest element in the given array. It is given that all array elements are distinct.
// Input:
// N = 6
// arr[] = 7 10 4 3 20 15
// K = 3

// Output : 7
// Explanation :
// 3rd smallest element in the given array is 7.

// Input:
// N = 5
// arr[] = 7 10 4 20 15
// K = 4
// Output : 15
// Explanation : 4th smallest element in the given array is 15.
// Author: Shreyash

#include<iostream>
#include<vector>
using namespace std;

int nth_smallest(vector<int>arr,int nth)
{
    for(int i = 0;i<arr.size();i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if(arr[i]<arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        
    }
    // for(int i:arr)
    // {
    //     cout << i<<" ";
    // }
    return arr[nth-1];

}

int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    int nth;
    cin >> nth;
    cout << nth_smallest(arr,nth);
    return 0;
}
