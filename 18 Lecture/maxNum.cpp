#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {5, 7, -2, 40, 90};

    int temp = INT32_MIN;
    for(int i=0; i<=4; i++)
    {
        if(arr[i] >= temp)
        {
            temp = arr[i];
        }
    }
    cout<<temp<<endl;
}