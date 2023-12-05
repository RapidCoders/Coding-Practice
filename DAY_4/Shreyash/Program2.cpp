#include<iostream>
using namespace std;


int sum(int up,int too)
{
    int even_no_sum = 0;
    for(int i= up;i<=too;i++){
        if(i%2==0){
            even_no_sum = even_no_sum + i;
        }
    }
    return even_no_sum;
}

int main()
{

    int up;
    int too;
    cout<<"Start point :";
    cin>>up;
    cout<<"End Point :";
    cin>>too;
    cout<<"Sum of Even Number for given range :";
    cout<<sum(up,too);
    
    return 0;
}
