
// Q.3 Write program which to print the below pattern.
// Input: 4
// Output:
// * * * *

//   * * * *

//     * * * *

//       * * * *
// Author: Shreyash

#include<iostream>
using namespace std;

void patt(int num){
    for(int i = 1;i<=num;i++)
    {
        for(int j = 1;j<=i;j++)
        {
            cout<<" ";

        }
        for(int k = 1;k<=num;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cin>>num;
    patt(num);
    return 0;
}
