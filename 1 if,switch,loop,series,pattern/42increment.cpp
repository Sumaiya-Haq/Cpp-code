#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x,y;

    cout<<"enter your x: ";
    cin>>x;
    cout<<"Enter your y: ";
    cin>>y;

    y=++x; //pre increment.
    cout<<"enter y= "<<y <<endl;

    y=x++; //post increment.
    cout<<"enter y= "<<y <<endl;

    x=--y; //pre decrement.
    cout<<"enter x= "<<x <<endl;

    x=y--; //post decrement.
    cout<<"enter x= "<<x <<endl;

    getch();
    
}
