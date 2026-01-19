#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {3, 2, 8, 1, 0};

    for(int j=1; j<5; j++)
    {
        for(int i=j; i>0; i--)
        {
            if(arr[i]<arr[i-1]){
                swap(arr[i], arr[i-1]);
            }else{
                break;
            }
        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}