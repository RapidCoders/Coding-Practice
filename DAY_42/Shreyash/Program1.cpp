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
