#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    for(int i=1; i<=10;i++){
        // cout<<num*i<<endl;

        cout<<num<<" "<<"* "<<i<<" "<<"="<<" "<<num*i<<endl;
    }

    // for(int i=num; i<=10*num; i=i+num)
    // {
    //     cout<<i<<" ";
    // }

    getch();
}