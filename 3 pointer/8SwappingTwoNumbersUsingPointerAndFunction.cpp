#include<iostream>
#include<conio.h>
using namespace std;
void swapping(int *ptr1 ,int *ptr2)
{
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main()
{
    int x=10,y=20;
    cout<<"Before swapping="<<x<<","<<y<<endl;
    swapping(&x,&y);
    cout<<"After swapping="<<x<<","<<y<<endl;

    getch();
}