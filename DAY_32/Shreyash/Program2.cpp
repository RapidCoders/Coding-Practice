
// Q.2 Program to copy all elements of one array into another array.
// Input  : 1,2,3,4,5
// Output : 1,2,3,4,5
// Author: Suyash



#include<iostream>
#include<vector>
using namespace std;

void copyarray(vector<int>arr)
{
    vector<int>arr_new;
    for(int i =0 ;i<arr.size();i++){
        arr_new.push_back(arr[i]);
    }

    for(int i = 0;i<arr_new.size();i++){
        cout<<arr_new[i]<<" ";
    }
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
    copyarray(arr);
    

    return 0;

}
