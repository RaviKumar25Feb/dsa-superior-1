#include<iostream>
using namespace std;

int main()
{
    // this outer loop will be executed 5 times
    for(int j=1; j<=5; j++)
    {
        // printing a single row of *
        for(int i=1; i<=5; i++)
        {
            cout<<"* ";
        }

        cout<<endl;
    }
}