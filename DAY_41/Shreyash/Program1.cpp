#include<iostream>
#include<vector>
using namespace std;

int largestEleMul(vector<int>arr)
{
    vector<int>arr_new;
    for(int i:arr){

        if(i < 0){
            int temp = i * -1;
            arr_new.push_back(temp);
        }else{
            arr_new.push_back(i);
        }
        

    }
    for(int i = 0;i<arr_new.size();i++){
        for(int j = 0;j<arr_new.size();j++){
            if(arr_new[i] > arr_new[j]){
                int temp = arr_new[i];
                arr_new[i] = arr_new[j];
                arr_new[j] = temp;
            }
        }
    }
    int mul = arr_new[0] * arr_new[1];
    return mul;
}

int main(){
    vector<int>arr;
    int num;
    cout<<"How many Element u want to put in array :";
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int result = largestEleMul(arr);
    cout<<result;
    return 0;
}
