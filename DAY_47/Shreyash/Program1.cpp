// Q.1 Write a function that takes a list of integers as input and returns the sum of all unique numbers in the list. If a number appears more than once, it should only be counted once in the sum.
// Input: [1, 2, 3, 4, 5]
// Expected Output: 15  # (1 + 2 + 3 + 4 + 5)

// Input: [2, 2, 2, 2, 2]
// Expected Output: 2  # (Only one unique number)

// Input: [1, 2, 3, 2, 4, 5, 5, 6]
// Expected Output: 21  # (1 + 2 + 3 + 4 + 5 + 6)

// Input: [-1, -2, 3, -2, 4, 5, -5, 6]
// Expected Output: 5  # (-1 + -2 + 3 + 4 + 5 + 6)
// Author: Vaibhav

#include<iostream>
#include<vector>
#include<set>
using namespace std;

int sum(vector<int>arr)
{
    set<int>uni;
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k:arr){
        uni.insert(k);
    }
    for(int k:uni){
        sum = sum + k;
    }
    return sum;

}    

int main()
{
    vector<int>arr;
    int num;
    int temp;
    cout<<"num :";
    cin>>num;
    for(int i = 0;i<num;i++){
        cin>>temp;
        arr.push_back(temp);

    }
    cout<<sum(arr);
    return 0;
}
