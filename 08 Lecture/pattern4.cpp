#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;

    // outer loop
    for(int row=1; row<=n; row++)
    {
        // inner loop
        for(int col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}