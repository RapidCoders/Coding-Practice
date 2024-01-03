#include<iostream>
#include<vector>
using namespace std;

int majority(vector<int>arr,int num,int siz)
{
    int count = 0;
    int maj;
    for(int i = 0;i<num;i++)
    {
        for(int j = 0;j<num;j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }
        if(count >= siz)
        {
            return arr[i];
            break;
        }
        count = 0;
        
    }
    return 0;

}

int main()
{
    vector<int>arr;
    int num;
    cin>>num;
    int temp;
    for(int i = 0;i<num;i++)
    {
        cin>>temp;
        arr.push_back(temp);
    }
    int siz = num/2;
    int result = majority(arr,num,siz);
    if(result == 0)
    {
        cout<<"None";
    }else{
        cout<<result;
    }
    
    return 0;
}
