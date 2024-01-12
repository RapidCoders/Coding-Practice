// Q.1 Write a program to implement binary search on a sorted array. The program should take an array of integers and a target value as input, and return the index of the target value in the array. If the target is not present, return -1.
// Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
// Target: 6
// Output: 5

// Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
// Target: 1
// Output: 0

// Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
// Target: 9
// Output: 8

// Input: [1, 2, 3, 4, 5, 6, 7, 8, 9]
// Target: 10
// Output: -1
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>arr,int low,int high,int target)
{
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid] < target){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }

    return -1;
    
}

int main(){
    vector<int>arr;
    cout<<"Target :";
    int target;
    cin>>target;
    int num;
    cout<<"How many Element u want to put in array :";
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int low = 0;
    int high = arr.size()-1;
    int result = binarysearch(arr,low,high,target);
    cout<<result;
    return 0;
}
