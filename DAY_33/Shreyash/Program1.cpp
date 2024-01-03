// Q.1 Given an array of integers, find the majority element. The majority element is the element that appears more than or equal to ⌊n/2⌋ times. Write a function to find the majority element. You may assume that the array is non-empty and the majority element always exists in the array.
// Input: [3, 3, 4, 2, 4, 4, 2, 4, 4]
// Output: 4

// Input: [1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9]
// Output: None.

// Input: [2, 2, 1, 1, 1, 2, 2]
// Output: 2

// Input: [3, 1, 1, 1, 2, 2, 2, 3, 3, 3]
// Output: None.

// Input: [2, 2, 2, 1, 1, 3, 3, 3, 3]
// Output: 3
// Author: Vaibhav



#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>arr,int num,int siz)
{
    int count = 0;
    int maj;
    for(int i = 0;i<num;i++)
    {
        for(int j = 0;j<num;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count >= siz)
        {
            return arr[i];
            break;
        }
        count = 0;
        
    }
    return 0;

}

int main()
{
    vector<int>arr;
    int num;
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int siz = num/2;
    int result = majority(arr,num,siz);
    if(result == 0)
    {
        cout<<"None";
    }else{
        cout<<result;
    }
    
    return 0;
}
