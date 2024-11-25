/*Write a program to add two numbers using pointers*/
#include<iostream>
using namespace std;
int main()
{
    int a,b,sum;
    cout<<"Enter your two numbers= ";
    cin>>a>>b;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    sum=*p1+*p2;
    cout<<"Your addition is= "<<sum<<endl;
    return 0;
}