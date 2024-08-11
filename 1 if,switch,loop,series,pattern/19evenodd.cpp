#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter your integer number= ";
    cin>>num;

    if(num%2==0)
    {
        cout<<"Even";
    }

    else{
        cout<<"Odd";
    }

    getch();
}