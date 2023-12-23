#include<iostream>
#include<vector>
using namespace std;

int min_product(vector<int>arr,vector<int>arr2)
{
    for(int i=0;i<arr.size();i++)
    {
        for(int j = 1;j<arr.size();j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }

        }
    }
    for(int i=0;i<arr2.size();i++)
    {
        for(int j = 1;j<arr2.size();j++)
        {
            if(arr2[i] < arr2[j])
            {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;

            }

        }
    }
    int sum = 0;
    for(int i = 0;i<arr.size();i++){
        sum = sum + (arr[i]*arr2[i]);

    }
    return sum;

}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    vector<int>arr;
    vector<int>arr2;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    int num2;
    cout<<"num2 :";
    cin>>num2;
    for(int i = 1;i<=num2;i++){
        cin>>temp;
        arr2.push_back(temp);
    }
    int sum = min_product(arr,arr2);
    if(num==num2){
        cout<<"Product :"<<sum;
    }
    else
    {
        cout<<"Invalid Input";

    }
}
