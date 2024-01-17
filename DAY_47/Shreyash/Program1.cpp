#include<iostream>
#include<vector>
#include<set>
using namespace std;

int sum(vector<int>arr)
{
    set<int>uni;
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int k:arr){
        uni.insert(k);
    }
    for(int k:uni){
        sum = sum + k;
    }
    return sum;

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
    cout<<sum(arr);
    return 0;
}
