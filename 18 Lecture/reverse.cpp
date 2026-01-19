#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 7, -2, 40, 90};
    int st=0, end=4;
    while(st < end)
    {
        //swaping
        // int temp = arr[st];
        // arr[st] = arr[end];
        // arr[end] = temp;
        swap(arr[st], arr[end]);
        //update
        st++, end--;
    }

    //print the array elements
    for(int i=0; i<=4; i++)
    {
        cout<<arr[i]<<" ";
    }
}