#include<iostream>
using namespace std;
int main() {
    int n, ans=0, rem=0, mul=1;
    cout<<"Enter a number: ";
    cin>>n;
    
    while(n>0)
    {
        // rem
        rem = n % 2;

        // ans
        ans = ans + rem * mul;
        
        // num update
        n = n / 2;

        // update mul
        mul = mul * 10;
    }
    cout<<ans<<endl;

}