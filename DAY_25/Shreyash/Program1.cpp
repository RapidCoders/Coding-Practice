#include<iostream>
#include<vector>
using namespace std;

void longest_substr(vector<string>str)
{
    string substr;

    for (string i : str)
    {
        if (i.length() >= substr.length())
            substr = i;
    }
    cout<<substr;
}

int main()
{
    int num;
    cin>>num;
    vector<string>str;
    string temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        str.push_back(temp);
    }

    longest_substr(str);
    return 0;
}
