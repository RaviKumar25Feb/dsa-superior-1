#include<iostream>
using namespace std;
int main() {
    int arr[5] = {2, 1, 4, 5, 6};
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum += arr[i];
    }

    int n = 6;
    int totalSum = n * (n + 1)/2;

    cout<<totalSum - sum<<endl;
}