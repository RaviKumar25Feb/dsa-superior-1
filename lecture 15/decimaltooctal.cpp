#include<iostream>
using namespace std;
int main()
{
    int n, rem=0, ans=0, mul=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(n > 0)
    {
        //rem
        rem = n % 8;
        //ans
        ans = ans + rem * mul;
        //num
        n = n / 8;
        //mul
        mul = mul * 10;
    }
    cout<<ans;
}