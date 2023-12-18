#include <iostream>
using namespace std;

void patt(int num) 
{
    for(int i = 1;i<=num;i++){
      for(int j =1;j<=num;j++){
        if(i==1||i==num||i+j==num+1){
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
  if(num==num1){
      patt(num);
  }else{
      cout<<"Invakid Input";
  return 0;
}
