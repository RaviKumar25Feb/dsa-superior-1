#include<iostream>
using namespace std;
int main()
{
    int arr[6] = {3, 5, 6, 8, 9, 15};
    int x = 90;

    int low=0, high=5;
    while(low<=high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == x)
        {
            cout<<"Index is: "<<mid<<endl;
            return 0;
        }
        else if(arr[mid] < x)
        {
            low = mid+1;
        }
        else {
            high = mid - 1;
        }
    }
    cout<<"Index is: "<<-1;
    return 0;
}