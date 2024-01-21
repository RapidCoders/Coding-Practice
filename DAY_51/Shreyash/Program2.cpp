#include<iostream>
#include<vector>
using namespace std;

void subsets(string str){
    vector<string>arr;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i; j < str.length(); j++) {
            arr.push_back(str.substr(i, j - i + 1));
        }
    }
    for(string i:arr){
        cout<<i<<" ";
    }
}    
int main(){
    string str1;
    cout<<"Enter the String :";
    cin>>str1;
    subsets(str1);

    return 0;
}


