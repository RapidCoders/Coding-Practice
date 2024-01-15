#include<iostream>
using namespace std;

int palindromNum(int num)
{
    int largest_pal_num = 0;
    if(num < 10)
    {
        cout<<"Invalid Input";
    }
    else
    {
        for(int i = 10;i<=num;i++){
            string str = "";
            if(i%1==0 && i%i == 0 && i%2 != 0&&num%i !=0)
            {
                int temp = i;
                while(temp > 0){
                int mod = temp%10;
                str = str + to_string(mod);
                temp = temp/10;
              }
              if(stoi(str) == i){
                largest_pal_num = i;
              }
            }
        }

    }
    return largest_pal_num;
}

int main(){
    int num;
    cout<<"Num :";
    cin>>num;
    cout<<palindromNum(num);
    return 0;
}
