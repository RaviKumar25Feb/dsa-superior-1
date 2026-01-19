#include<iostream>
using namespace std;
int main() {
    char c;
    cout<<"Enter any small character: ";
    cin>>c;

    char ans;
    ans = c - 'a' + 'A';

    cout<<"Your Answer is: "<<ans;
}