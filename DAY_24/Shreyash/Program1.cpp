#include <iostream>
#include <vector>
using namespace std;



void missing_finder(vector<int>arr,int num)
{
    for(int i = 0;i<arr.size();i++){
        for(int j = 1;j<arr.size();j++){
            if(arr[i] < arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int miss ;
    for(int i = arr[0];i<arr[0]+arr.size();i++){
        for(int j = 0;j<arr.size();j++){
            if(arr[j]!=i){
                miss = i;
            }
        }
    }
    cout<<miss-1;
}


int main() {
    vector<int>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    int temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    missing_finder(arr,num);
    return 0;
}

