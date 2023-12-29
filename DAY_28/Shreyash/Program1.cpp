#include<iostream>
using namespace std;

void even_sqr(int num)
{
    for(int i = 1;i<=num*2;i++)
    {
        if(i%2 == 0)
        {

            cout<<i*i<<" ";
            
        }
    }

}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    even_sqr(num);
    return 0;

}
