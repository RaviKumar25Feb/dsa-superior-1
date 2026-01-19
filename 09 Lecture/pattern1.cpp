#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    // outer loop -> handle rows
    for(int row=1; row<=n; row++)
    {
        //handle space
        for(int space=1; space<=n-row; space++)
        {
            cout<<"  ";
        }

        //handle stars
        for(int star=1; star<=row; star++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}