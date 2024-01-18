

// Q.2 Write a program to find 3rd largest element in an array.
// Input  : [1,2,5,6,3,2]
// Output : 3rd largest element is : 3

// Input  : [44,66,99,77,33,22,55]
// Output : 3rd largest element is : 66
// Author: Suyash


#include<iostream>
#include<vector>
using namespace std;

int trd_largest(vector<int>arr)
{
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr[2];
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
    cout<<trd_largest(arr);
    return 0;
}
