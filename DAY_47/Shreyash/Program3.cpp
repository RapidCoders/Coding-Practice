#include<iostream>
#include<vector>
#include<set>
using namespace std;

int diffmax_min(vector<int>arr)
{
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr[0]-arr[arr.size()-1];
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
    cout<<diffmax_min(arr);
    return 0;
}
