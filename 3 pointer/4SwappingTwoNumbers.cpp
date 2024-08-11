#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x=10,y=20,temp;
    int *ptr1,*ptr2;
    ptr1=&x;
    ptr2=&y;

    //swapping
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    cout<<"x="<<x<<endl;
    cout<<"y="<<y;

    getch();
}