// Q.1 Write a program which accept one number from user and check whether it is palindrome or not.
// Input : 121
// Output : Palindrome

// Input : 45654
// Output : Palindrome

// Input : 98765
// Output : Not Palindrome
// Author: Vaibhav



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
