
// Q.2 Program to print the elements of an array present on odd position.
// Input: arr = [1, 2, 3, 4, 5]  

// Output: Elements of given array present on odd position: 2 4 
// Author: Suyash


#include<iostream>
#include<vector>
using namespace std;
void even_index(vector<int>arr)
{
//     int parts = arr.size();
    for(int k : arr){
        if(k%2==0){
            cout<<" "<<k;
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
 
