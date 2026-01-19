#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number, to check prime or not: ";
    cin>>num;

    int factor=0;
    for(int i=1; i<=num; i++)
    {
        if(num%i == 0)
        {
            factor++;
        }
    }

    if(factor == 2)
    {
        cout<<"Prime number hai";
    }
    else{
        cout<<"Not prime";
    }
}