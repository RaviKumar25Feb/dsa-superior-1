#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int row=1; row<=n/2; row++)
    {
        for(int star=1; star<=n/2-row+1; star++)
        {
            cout<<"* ";
        }
        for(int space=1; space<=row*2-2; space++)
        {
            cout<<"  ";
        }
        for(int star=1; star<=n/2-row+1; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    for(int row=1; row<=n/2; row++)
    {
        for(int star=1; star<=row; star++)
        {
            cout<<"* ";
        }
        for(int space=1; space<=n/2*2-row*2; space++)
        {
            cout<<"  ";
        }
        for(int star=1; star<=row; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}