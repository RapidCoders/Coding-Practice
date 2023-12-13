Q.1 Given an array of integers nums and an integer target, return the indices of the two numbers such that they add up to the target.
Input: nums = [2, 7, 11, 15], target = 9
Output: [0, 1]
Explanation: nums[0] + nums[1] equals 9, so the answer is [0, 1].

Input: nums = [3, 2, 4], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] equals 6.

Input: nums = [3, 2, 9, 7], target = 4
Output: Not Found

Input: nums = [2,3,3,3,5], target = 6
Output: [1, 2]
Explanation: nums[1] + nums[2] equals 6.
Author: Vaibhav

#include<iostream>
// #include<cmath>
#include<vector>
using namespace std;

vector<int> targetfinder(vector<int>arr,int targett)
{
    vector<int>new_arr;
    vector<int>new_arr2;
    new_arr2.push_back(0);
    new_arr2.push_back(0);
    new_arr2.push_back(0);
    
    int flag = 0;
    for(int j = 0;j<=arr.size()-1;j++){
        for(int k = 1;k<=arr.size()-1;k++){
            if(j!=k){
                if(arr[j]+arr[k] == targett){
                // cout<<j<<" "<<k;
                new_arr.push_back(j);
                new_arr.push_back(k);
                flag++;
                new_arr.push_back(flag);
                // break;
            }
            }
        }
    }

    if(flag >= 1){
        return new_arr;
    }
    else{
        return new_arr2;
    }
}

int main()
{
    vector<int>arr;
    vector<int>arrrr;
    int targett;
    int num;
    cout<<"How many elements u want to put in array :";
    cin>>num;
    cout<<"target :";
    cin>>targett;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    arrrr = targetfinder(arr,targett);
    if(arrrr[2] == 0){
        cout<<"Not Found";
    }else{
        cout<<arrrr[0]<<" "<<arrrr[1];
    }
    return 0;
}
