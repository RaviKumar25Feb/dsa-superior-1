#include<iostream>
using namespace std;

int  main()
{
    int n, rem=0, ans=0, mul=1;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        rem = n % 10;
        ans = ans + rem * mul;
        n = n/10;
        mul=mul*8;
    }
    cout<<ans;
}