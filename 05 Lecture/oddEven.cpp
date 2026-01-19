#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter a number : ";
    cin>>num;

    cout<<"These are even number: "<<endl;
    for(int i=1; i<=num; i++)
    {
        if(i % 2 ==  0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;

    cout<<"These are odd numbers:"<<endl;
    for(int i=1; i<=num; i++)
    {
        if(i % 2 !=  0)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}