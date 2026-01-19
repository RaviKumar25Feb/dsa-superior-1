#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    //outer loop
    for(int row=1; row<=n; row++)
    {
        //inner loop -> handle spaces
        for(int space = 1; space<=n-row; space++)
        {
            cout<<"  ";
        }
        //inner loop -> handle col num
        for(int j=1; j<=row; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}