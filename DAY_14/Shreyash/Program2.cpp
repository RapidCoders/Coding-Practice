// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
void alpha_patt(int num){
    for(int i = 1;i<=num;i++){
        for(int j = 1;j<=i;j++){
            cout<<(char)(j+64);
    
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
