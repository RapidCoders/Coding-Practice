
// Q2. Write a program to print given pattern
// *
// *  *
// *  *  *
// *  *  *  *
// *  *  *  *  *
// Author: Suyash

#include<iostream>
using namespace std;

void patt(int num)
{
  for(int i = 1;i<=num;i++){
    for(int j = 1;j<=i;j++){
      cout<<"* ";
    }
    cout<<endl;
  }
  
}

int main()
{
  int num;
  cout<<"Enter Num of Rows :";
  cin>>num;
  patt(num);
  return 0;
}
