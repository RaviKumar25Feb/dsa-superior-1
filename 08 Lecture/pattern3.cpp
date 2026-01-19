#include<iostream>
using namespace std;

int main()
{
//    1
//    2 2
//    3 3 3
//    4 4 4 4

    for(int row=1; row<=4; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<row<<" ";
        }
        cout<<endl;
    }
}