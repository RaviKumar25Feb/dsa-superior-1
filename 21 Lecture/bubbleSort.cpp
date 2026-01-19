#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 5-3*5+3, 6, 5, 8};
    int status=false;
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<4-j; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]);
                status = true;
            }
        }
        if(status == false){
            for(int i=0; i<5; i++){
                cout<<arr[i]<<" ";
            }
            return 0;
        }
    }

    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
}