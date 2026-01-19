#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 7, -2, 40, 90};
    int x = 40;

    for(int i=0; i<=4; i++)
    {
        if(arr[i] == x)
        {
            cout<<"Present";
            return 0;
        }
    }
    cout<<"Not present";
    return 0;
}