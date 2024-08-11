#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,max;
    cout<<"Enter 2 integer number= ";
    cin>>num1>>num2;

    max=(num1>num2)?num1:num2;
    cout<<"maximum is= "<<max;

    getch();
}