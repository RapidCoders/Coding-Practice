#include <iostream>
using namespace std;

void patt(int num) {
    for(int i = 1;i<=num/2+1;i++){
        for(int j = 1;j<=i;j++){
            if(i == j){
                cout<<i;
            }else{
                cout<<i<<"*";
            }
        }
    cout<<endl;
    }
    for(int i = num/2;i>=1;i--){
        for(int j = 1;j<=i;j++){
            if(i == j){
                cout<<i;
            }else{
                cout<<i<<"*";
            }
        }
    cout<<endl;
    }
    
}

int main() {
    int n;
    cout << "num : ";
    cin >> n;
    patt(n);

    return 0;
}
