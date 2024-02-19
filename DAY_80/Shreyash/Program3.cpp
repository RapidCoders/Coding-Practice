#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(string a,string b)
{
    return (a+b)>(b+a);
}

string concatnator(vector<string>arr)
{
    string sum = "";
    sort(arr.begin(),arr.end(),compare);
    for(string s:arr)
    {
        cout << s << " ";
        sum += s;
    }
    return sum;
}

int main()
{
    vector<string>arr;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        string temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << concatnator(arr);
    return 0;
}
