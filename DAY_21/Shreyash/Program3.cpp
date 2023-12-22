
// Q.3 Write a program to print given pattern.
// Input : num = 7
// Output : 

//                  *
//                * * *
//              * * * * *
//            * * * * * * *
//              * * * * *
//                * * *
//                  *

// Author: Shreyash

#include<iostream>
using namespace std;
void patt(int rows)
{
    if(rows%2 == 0)
    {
        cout<<"invalid input(only odd value accepted)";
    }
    else{
        for(int i = 1;i<=rows;i = i+2){
			for(int j = 1;j<=(rows - i)/2;j++){
				cout<<"  ";
			}
			for(int k = 1;k<=i;k++){
				cout<<"* ";
			}
			cout<<endl;
		}
		for(int i = rows-2;i>=1;i = i-2){
			for(int j = 1;j<=(rows - i)/2;j++){
				cout<<"  ";
			}
			for(int k = 1;k<=i;k++){
				cout<<"* ";
			}
			cout<<endl;
		}

    }
}

int main()
{
    int rows;
    cout<<"Enter Rows :";
    cin>>rows;
    patt(rows);

}
