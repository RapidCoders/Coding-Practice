
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;


void frequency(vector<int>arr,int num)
{
    // for(int j:arr){
    //     cout<<j<<" ";
    // }
    cout<<" Elements"<<"|"<<"frequency"<<endl;
    for(int k :arr){
        cout<<"     "<<k<<"  "<<"|"<<"  "<<count(arr.begin(), arr.end(), k) << endl;
    }

}

int main()
{
    std::vector< int > arr;
    int num;
    cout<<"How Many Number's frequency do you want to check :";
    cin>>num;
    int temp;
    for(int i=1;i<=num;i++){
         cin>>temp;
         arr.push_back(temp);

    }
    frequency(arr,num);
    return 0;
}
