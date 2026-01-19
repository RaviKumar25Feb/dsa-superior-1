#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 6, 4, 1, 7}; // 7 2 6 4 1
    int temp = arr[4];
    for(int i=4; i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;

    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
}