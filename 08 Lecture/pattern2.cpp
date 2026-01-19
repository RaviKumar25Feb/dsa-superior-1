#include<iostream>
using namespace std;

int main()
{
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    // outer loop for rows
    for(int row=1; row<=4; row++)
    {
        // inner loop for columns
        for(int col=1; col<=row; col++)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}