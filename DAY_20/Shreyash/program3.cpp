#include<iostream>
using namespace std;

bool num_checker(int num)
{
    int num1 = 1;
    for(int i = 1;i<=num;i++)
    {
        num1 = num * i;
    }
    while(num1 != 0||num != 0){
        if(num == 0){
            break;
        }

        if(num1 %10 != num%10){
            return false;
        }
        num1 = num1/10;
        num = num/10;
	}
	return true;
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int flag = num_checker(num);
    if(num > 0)
    {
        if(flag == true){
            cout<<"True";
        }else{
            cout<<"False";
        }
    }
}
