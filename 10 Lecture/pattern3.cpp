#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter num of rows: ";
    cin>>num;


    for(int row=1; row<=num/2; row++)
    {
        for(int space=1; space<=num/2-row; space++)
        {
            cout<<" ";
        }

        for(int star=1; star<=row; star++)
        {
            cout<<" *";
        }
        cout<<endl;
    }

    for(int row=1; row<=num/2; row++)
    {
        for(int space=1; space<=row-1; space++)
        {
            cout<<" ";
        }

        for(int star=1; star<=num/2-row+1; star++)
        {
            cout<<" *";
        }
        cout<<endl;
    }
}