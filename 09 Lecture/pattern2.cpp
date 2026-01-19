#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter number of rows: ";
    cin>>num;

    //outer loop -> handle rows
    for(int row=1; row<=num; row++)
    {
        //printing spaces
        for(int space=1; space<=num-row; space++)
        {
            cout<<"  ";
        }

        //printing row number
        for(int j=1; j<=row; j++)
        {
            cout<<row<<" ";
        }

        cout<<endl;
    }
}