/*Write a program to swap two numbers using pointers*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,swap;
    cout<<"Enter two numbers =";
    cin>>a>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
     cout<<"Before Swapping number is= "<<*p1<<" "<<*p2<<endl;
    swap=*p1;
    *p1=*p2;
    *p2=swap;
    cout<<"After Swapping number is= "<<*p1<<" "<<*p2<<endl;
}