// Q.2 K Shape Character Pattern Program.
// A B C D E F 
// A B C D E 
// A B C D 
// A B C 
// A B 
// A 
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
// A B C D E F

// Author: Suyash

#include <iostream>
using namespace std;
void alpha_patt(int num){
    for(int l = num;l>=1;l--){
        for(int k = 1;k<=l;k++){
            cout<<(char)(k+64)<<" ";
    
        }
        cout<<endl;
    }
    for(int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<(char)(j+64)<<" ";
    
        }
        cout<<endl;
    }
}

int main() {
    int num;
    cout<<"Enter Number :";
    cin>>num;
    alpha_patt(num);
    return 0;
}
