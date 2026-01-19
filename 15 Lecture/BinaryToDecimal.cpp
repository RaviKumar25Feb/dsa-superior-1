#include<iostream>
using namespace std;
int main()
{
    int num, ans=0, rem=0, mul=1;
    cout<<"Enter a binary number: ";
    cin>>num;
    
    while(num > 0)
    {
        //lst digit ~ rem
        rem = num % 10;
        //ans
        ans = ans + rem * mul;
        //update num
        num = num / 10;
        //mul
        mul = mul * 2;
    } 
    cout<<ans<<endl;
}