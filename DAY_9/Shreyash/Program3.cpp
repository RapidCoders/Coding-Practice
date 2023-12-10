#include<iostream>
using namespace std;

void mul_table(int num)
{
    for(int i = 1;i<=10;i++)
    {
        for(int j = 1;j<=num;j++)
        {
            if(i*j == 1||i*j == 2||i*j == 3||i*j == 4||i*j == 5||i*j == 6||i*j == 7||i*j == 8||i*j == 9){
                cout<<"0"<<i*j<<" ";
            }
            else{
                cout<<i*j<<" ";
            }

        }
        cout<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    mul_table(num);
    return 0;

}
