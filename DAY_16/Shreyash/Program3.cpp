
// Q.3 Write a program to print given pattern.
// Input : row = 7 col = 7
// Output :

// * * * * * * * 
//       *
//       *
//       *
//       *
//       *
//       *

// Author: Shreyash
#include <iostream>
using namespace std;

void patt(int num) 
{
    for(int i = 1;i<=num;i++){
      for(int j =1;j<=num;j++){
        if(i==1||j==(num/2)+1){
          cout<<"* ";
        }else{
          cout<<"  ";
        }
      }
      cout<<endl;
    }
}

int main(){
  int num;
  int num1;
  cin>>num;
  cin>>num1;
  if(num==num1&&num%2 == 1&&num1%2==1){
      patt(num);
  }else{
      cout<<"Invakid Input";
  }
  return 0;
}
