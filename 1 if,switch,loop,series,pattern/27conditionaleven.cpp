#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1;
    cout<<"Enter 1 integer number= ";
    cin>>num1;

    (num1%2==0)? cout<<num1<< "is even" : cout<<num1<<" is odd";

    getch();
}
