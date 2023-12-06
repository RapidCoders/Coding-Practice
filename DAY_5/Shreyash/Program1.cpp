// # Q1. Write a program which accept N numbers from user and display addition of digits of each element.
// ~~~
// Input: 5
// Input: 85 36 98 125 225
// Output: 13 9 17 8 9

// Input: 7
// Input: 854 698 236 14 75 32 65
// Output: 17 23 14 5 12 5 11
// ~~~
// **Author: Vaibhav**

 

// Code
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


void sum(vector<int>arr)
{
    vector<int>arr2;
    for(int j:arr){
        int sum = 0;
        int r ;
        while(j>0){
            r = j%10;
            sum = sum + r;
            j = j/10;

        }
        arr2.push_back(sum);

    }
    for(int k:arr2){
        cout<<k<<" ";
    }

}

int main()
{
    std::vector< int > arr;
    int num;
    cout<<"How Many Number's frequency do you want to check :";
    cin>>num;
    int temp;
    for(int i=1;i<=num;i++){
         cin>>temp;
         arr.push_back(temp);

    }
    sum(arr);
    return 0;
}
