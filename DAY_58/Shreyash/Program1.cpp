

#include<iostream>
#include<vector>
using namespace std;

void even_odd_div(vector<int>arr)
{
    vector<int>even;
    vector<int>odd;
    for (int i = 0;i < arr.size();i++)
    {
        if(arr[i]%2 == 0)
        {
            even.push_back(arr[i]);
        }
        else
        {
            odd.push_back(arr[i]);
        }
    }
    cout<<"[[";
    for(int i:even)
    {
        cout<<" "<<i<<" ";
    }
    cout<<"],[";
    for(int j:odd)
    {
        cout<<" "<<j<<" ";
    }
    cout<<"]]";
}
int main()
{
    vector<int>arr;
    int num;
    cin >> num;
    int temp;
    for (int i = 0;i < num;i++)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    even_odd_div(arr);
    return 0;
}
