// Q.2 Write program which to print the below pattern.
// Input: 8
// Output:
//         1           1 
//           2       2
//             3   3
//               4
//             3   3
//           2       2
//         1           1
// Author: Suyash


#include <iostream>
using namespace std;

void patt(int num){
    int count = 1;
    for (int i = 1; i <= num+1; i++) {
        for (int j = 1; j <= num; j++) {
            if (i == j || i + j == num+1)
                cout<<count;
            else
                cout << " ";
        }
        if (i <= num/2)
            count = count +1;
        else
            count = count -1;

        cout<<endl;
    }
}
int main() {
    int num;
    cout << "Number: ";
    cin >> num;
    int num2 = num -1;
    if(num%2 == 0){
        patt(num2);
    }else{
        patt(num);
    }
    
    return 0;
}
