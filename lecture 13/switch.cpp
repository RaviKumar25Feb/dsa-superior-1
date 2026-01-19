#include<iostream>
using namespace std;
int main()
{

    int i;
    cout<<"Enter value of i between 1 to 5: ";
    cin>>i;

    switch (i)
    {
    case 1:
        cout<<"Ravi Saini";
        break;
    case 2:
        cout<<"Nitin";
        break;
    case 3:
        cout<<"Yogesh";
        break;
    case 4:
        cout<<"Aksh";
        break;
    case 5:
        cout<<"Rahmat";
        break;
    default:
        cout<<"You entered wrong input";
        break;
    }
}