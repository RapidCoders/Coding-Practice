// Q.1 Write a function that takes an array of integers and returns the length of the longest consecutive elements sequence.
// Input: [100, 4, 200, 1, 3, 2]
// Output: 4 (the longest consecutive elements sequence is [1, 2, 3, 4])

// Input: [9, 1, 4, 7, 2, 8, 3, 5]
// Output: 5 (the longest consecutive elements sequence is [1, 2, 3, 4, 5])

// Input: [3, 3, 2, 2, 1, 1]
// Output: 3 (longest consecutive sequence is [1, 2, 3])

// Input: [10, 20, 30, 40, 50]
// Output: 5 (longest consecutive sequence is [10, 20, 30, 40, 50])
// Author: Vaibhav

#include<iostream>
#include<vector>
using namespace std;

int longest_consecutive(vector<int>arr,int num)
{
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i]  < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
     int count = 1;
    int max_count = -1;
 
    for (int i = 0; i < num - 1; i++)
    {
        if (arr[i + 1] - arr[i] == 1)
        {
            count++;
        }
        else if (arr[i + 1] - arr[i] == 0)
        {
            continue;
        }
        else
        {
            count = 1;
        }
        max_count = max(max_count, count);
    }
    return max_count;
}

int main()
{
    vector<int>arr;
    int num;
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++){
        cin>>temp;
        arr.push_back(temp);
    }

    int numm = longest_consecutive(arr,num);
    cout<<numm;
    return 0;
}
