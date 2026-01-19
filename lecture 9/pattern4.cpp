#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter no of rows: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int space=1; space<=n-row; space++)
        {
            cout<<"  ";
        }
        for(int j=row; j>=1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}