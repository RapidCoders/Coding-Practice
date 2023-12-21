#include<iostream>
using namespace std;

int num_checker(int num)
{
    int flag = 0;
    for(int i = 1;i<=num/i;i++)
    {
    	
        if(num%i == 0){
            if(i*(i+1)==num)
            {
                flag++;
            }
        }
    }
    return flag;    
}

int main(){
    int num;
    cout<<"num :";
    cin>>num;
    int flag = num_checker(num);
    if(flag == 0)
    {
        cout<<"False";
    }
    else
    {
        cout<<"True";
    }
}
