#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1=10,num2=20,sum;
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;

    sum=*ptr1 + *ptr2;
    cout<<"sum is="<<sum;

    getch();
}