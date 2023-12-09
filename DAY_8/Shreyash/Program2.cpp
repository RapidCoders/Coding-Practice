#include<iostream>
#include<vector>
using namespace std;
void even_index(vector<int>arr)
{
    for(int j = 0;j<=arr.size();j++){
        if(j%2==1){
            cout<<arr[j]<<" ";
        }
    }
    
}

int main()
{
    int num;
    cin>>num;
    vector<int>arr;
    for(int i = 1;i<=num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);


    }
    cout<<"Elements of given array present on even position: ";
    even_index(arr);

  return 0;
}
 

