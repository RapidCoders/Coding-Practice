#include <iostream>
#include <vector>
using namespace std;

string counter(vector<string>arr)
{          
    int i, j;
    string str;

    for (i = 0; i < arr[0].size(); i++)
    {
        for (j = 1; j < arr.size(); j++)
        {
            if (arr[0][i] != arr[j][i])
                return  str;
        }
        str.push_back(arr[0][i]);
    }
    return str;
}

int main() {
    vector<string>arr;
    int num;
    cout << "Number: ";
    cin >> num;
    string temp;
    for(int i = 1;i<=num;i++){
        cin>>temp;
        arr.push_back(temp);
    }
    string str = counter(arr);
    cout<<str;
    return 0;
}
