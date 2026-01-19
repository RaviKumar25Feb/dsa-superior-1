#include<iostream>
using namespace std;
int main() {
    int num;
    cin>>num;

    int rem;
    while(num!=1)
    {
        rem = num % 2;
        //check kroge
        if(rem != 0)
        {
            cout<<"Not in power of 2";
            return 0;
        }
        num = num / 2;
    }

    cout<<"Number is in power of 2: ";
    return 0;
}