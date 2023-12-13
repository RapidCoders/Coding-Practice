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
        for(int k = 1;k<=arr.size();k++){
            if(j == k){
                break;
            }else if(arr[j]+arr[k] == targett){
                // cout<<j<<" "<<k;
                new_arr.push_back(j);
                new_arr.push_back(k);
                flag++;
                new_arr.push_back(flag);
                break;
            }
        }
    }
    if(flag == 1){
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
