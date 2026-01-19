#include<iostream>
using namespace std;
//total occurance 
int main()
{
    int arr[6] = {5, 7, 8, 8, 8, 10};
    // first position of target = 8
    int target = 8;
    int start=0, end=5, fposi=-1;
    while(start<=end){
        int mid = (start + end) / 2;

        if(arr[mid] == target){
            end = mid-1;
            fposi = mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout<<"First Posi: "<<fposi<<endl;

    // last position of target = 8
    start=0, end=5; int sposi=-1;
    while(start<=end){
        int mid = (start + end) / 2;

        if(arr[mid] == target){
            start=mid+1;
            sposi = mid;
        }else if(arr[mid] < target){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    cout<<"Last posi: "<<sposi<<endl;

    //total occurnce of 8
    cout<<"Total occurance of target: "<< sposi-fposi+1<<endl;
}