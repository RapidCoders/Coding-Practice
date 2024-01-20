#include<iostream>
using namespace std;

int counter(string str){
    int count = 0;
    for(int i = 0;i<str.length();i++){
        if(str[i] != ' '&& str[i] != ','&& str[i] != '.'&& str[i] != '!'&& str[i] != '?'){
            count++;
        }
        
    }
    return count;
}    
int main(){
    string str;
    getline(cin,str);
    cout<<"Total number of alphabets in a string: "<<counter(str);

    return 0;
}

