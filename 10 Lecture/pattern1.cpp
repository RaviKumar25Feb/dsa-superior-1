#include<iostream>
using namespace std;

int main(){
//     *
//    ***
//   *****

    int n;
    cout<<"Enter no of rows: ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        // left half spaces
        for(int space=1; space<=n-row; space++)
        {
            cout<<"  ";
        }

        // left half stars
        for(int leftStar=1; leftStar<=row; leftStar++)
        {
            cout<<"* ";
        }

        // right half stars
        for(int leftStar=1; leftStar<=row-1; leftStar++)
        {
            cout<<"* ";
        }

        // new line creation
        cout<<endl;
    }
}