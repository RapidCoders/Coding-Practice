#include<iostream>
#include<cmath>
using namespace std;

void binarytooctal(int num)
{
    int octalDigit = 0; 
    int count = 1;
    int  i = 0;
    int  k = 0;
    int arr[16] = {0};

    while(num > 0)
    {
        int digit = num % 10;
        octalDigit += digit * pow(2, i);
        i++;
        num /= 10;
        arr[k] = octalDigit;
        if(count % 3 == 0)
        {
            octalDigit = 0;
            i = 0;
            k++;
        }
        count++;
    }

    for (int j = k; j >= 0; j--)
    {
        cout<<arr[j];
    }

}


int main()
{
    long int binary;
    cout<<"Enter binary num:";
    cin>>binary;
    binarytooctal(binary);
    return 0;
}
