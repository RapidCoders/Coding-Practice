#include<iostream>
#include<vector>
using namespace std;

vector<int> index_shifter(vector<int>arr,int steps)
{
    vector<int>new_arr;
    for(int j = arr.size()-steps;j<arr.size();j++){
        new_arr.push_back(arr[j]);
    } 
    for(int i = 0;i<arr.size()-steps;i++){
        new_arr.push_back(arr[i]);

    }
    return new_arr;
}

int main(){
    int num;
    int steps;
    cout<<"num :";
    cin>>num;
    vector<int>arr;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"steps :";
    cin>>steps;

    vector<int>new_arr = index_shifter(arr,steps);
	cout<<"{";
	for(int i:new_arr){
        cout<<i<<",";
    }
	cout<<"}";
    
}
