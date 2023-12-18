#include <iostream>
using namespace std;

void patt(int num){
    char ch = 'A';
    for (int i = 1; i <= num; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << ch << " ";
        }
            ++ch;
        cout <<endl;
    }
}

int main() {
    int num;
    cin>>num;
    patt(num);
    return 0;
}
