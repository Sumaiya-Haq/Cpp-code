#include<iostream>
#include<conio.h>
using namespace std;
    void addition(int,int);
    void subtraction(int,int);
    void multiplication(int,int);
    void divition(int,int);
int main()
{
    addition(10,3);
    subtraction(10,3);
    multiplication(10,3);
    divition(10,3);
    cout<<"All function have called";
    getch();
}
void addition(int a,int b)
{
    int sum=a+b;
    cout<<"Sum ="<<sum<<endl;
}
void subtraction(int a,int b)
{
    int sum=a-b;
    cout<<"subtraction ="<<sum<<endl;
}
void multiplication(int a,int b)
{
    int sum=a*b;
    cout<<"multiplication ="<<sum<<endl;
}
void divition(int a,int b)
{
    int sum=a/b;
    cout<<"divition ="<<sum<<endl;
}
