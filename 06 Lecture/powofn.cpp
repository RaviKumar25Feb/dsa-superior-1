#include<iostream>
using namespace std;
int main()
{
    int n, pow;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<"Enter power: ";
    cin>>pow;

    int ans = n;
    for(int i=1; i<pow; i++)
    {
        ans = ans * n;
    }

    cout<<ans;
}