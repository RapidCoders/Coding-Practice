#include <iostream>
using namespace std;

void patt(int num) 
{
    for(int i = 1;i<=num;i++){
      for(int j =1;j<=num;j++){
        if(i==j||j==1||i==num){
          cout<<"*";
        }else{
          cout<<" ";
        }
      }
      cout<<endl;
    }
}

int main(){
  int num;
  cin>>num;
  patt(num);
  return 0;
}
