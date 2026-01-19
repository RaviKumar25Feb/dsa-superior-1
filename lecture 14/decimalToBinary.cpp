#include<iostream>
using namespace std;
int main()
{
    int num, rem=0, ans=0, mul=1;
    cout<<"Enter a number: ";
    cin>>num;

    while(num>0)
    {
        //rem
        rem = num % 2;

        //divide
        num = num / 2;

        //join
        ans = rem * mul + ans;

        //update the mul
        mul = mul * 10;
    }

    cout<<ans;
}