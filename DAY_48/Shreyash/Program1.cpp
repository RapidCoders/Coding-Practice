#include<iostream>
#include<vector>
using namespace std;

bool sorted_asc(vector<int>arr)
{
    vector<int>arr_new;
    for(int k:arr){
        arr_new.push_back(k);
    }
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int count = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]==arr_new[i]){
            count++;
        }
    }
    if(count == arr.size()){
        return true;
    }

    return false;
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
    if(sorted_asc(arr)){
        cout<<"True";
    }else{
        cout<<"False";
    }
    return 0;
}
