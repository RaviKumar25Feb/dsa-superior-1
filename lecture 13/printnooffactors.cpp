#include<iostream>
using namespace std;
int main()
{
    //print no of all factors of n=30

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int count=0;

    int i=1;
    while(i<=30)
    {
        if(n%i==0)
        {
            count++;
        }
        i++;
    }

    cout<<"Total no of factors: "<<count<<endl;

}