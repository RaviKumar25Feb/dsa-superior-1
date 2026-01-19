#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {6, 6, 6, 6, 6};
    //find second largest number in the array

    //first largest number
    int temp=arr[0], index=-1;
    for(int i=0; i<=4; i++)
    {
        if(arr[i] >= temp){
            temp = arr[i];
            index = i;
        }
    }

    temp = INT32_MIN; int ansIndex=-1;
    for(int i=0; i<=4; i++)
    {
        if(arr[i] >= temp && i != index){
            temp = arr[i];
            ansIndex = i;
        }
    }

    cout<<ansIndex<<endl;

}