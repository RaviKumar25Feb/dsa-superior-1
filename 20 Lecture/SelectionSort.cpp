#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {3,1,2,6,0};

    //actual array element
    cout<<"Array's Element: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    for(int j=0; j<4; j++)
    {
        int temp = INT32_MAX, index=-1;
        for(int i=j; i<5; i++)
        {
            if(arr[i] < temp)
            {
                temp = arr[i];
                index = i;
            }
        }
        swap(arr[j], arr[index]);
    }


    cout<<"Sorted Array Elements: ";
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}