#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter your 1st integer number= ";
    cin>>num1;
    cout<<"Enter your 2nd integer number= ";
    cin>>num2;
    cout<<"Enter your 3rd integer number= ";
    cin>>num3;

    if(num1>num2 && num1>num3)
    {
        cout<<num1;
    }

    else if(num2>num1 && num2>num3)
    {
        cout<<num2;
    }

    else{
        cout<<num3;
    }

    getch();
}