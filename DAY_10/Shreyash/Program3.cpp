#include<iostream>
#include<vector>
using namespace std;

void factors(vector<int>arr)
{
    cout<<"factors :"<<endl;
    for(int i :arr)
    { 
    
        for(int k = 1;k<=i;k++){
            if(i%k == 0)
            {
            cout<<k<<" ";
            }
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    vector<int>arr;
    cout<<"Enter Number :";
    cin>>num;
    int temp;
    for(int j =1;j<=num;j++){
        cin>>temp;
        arr.push_back(temp);
    }
    factors(arr);
    return 0;

}
