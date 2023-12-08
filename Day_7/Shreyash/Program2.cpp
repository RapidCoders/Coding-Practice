// Code
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


void sum(vector<int>arr)
{
    vector<int>arr2;
    for(int i = arr.size()-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }
    

}

int main()
{
    vector< int > arr;
    int num;
    cout<<"how many number you want to add in array :";
    cin>>num;
    int temp;
    for(int i=1;i<=num;i++){
        cout<<"Input "<<i<<":";
         cin>>temp;
         arr.push_back(temp);

    }
    cout<<"Array in reverse order:[ ";
    sum(arr);
    cout<<"]";
    return 0;
}
