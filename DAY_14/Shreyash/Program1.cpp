// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void is_palin(string num){
    string str;
    for(char i:num){
        str = i + str;
    }
    if(str == num){
        cout<<"palindrome.";
    }else{
        cout<<"Not palindrome.";
    }
    
    
}

int main() {
    string num;
    cout<<"Enter Number :";
    cin>>num;
    is_palin(num);
    return 0;
}
