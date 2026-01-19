#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter no of rows: ";
    cin>>num;

    for(int row=1; row<=num; row++)
    {
        // left half spaces
        for(int space=1; space<=row-1; space++)
        {
            cout<<"  ";
        }

        // left half stars
        for(int lstar=1; lstar<=num-row+1; lstar++)
        {
            cout<<"* ";
        }

        //right half stars
        for(int rstar=1; rstar<=num-row; rstar++)
        {
            cout<<"* ";
        }

        //new line printing
        cout<<endl;
    }
}