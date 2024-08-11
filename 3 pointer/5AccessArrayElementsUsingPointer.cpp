#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[5]={10,20,30,40,50};
    int *ptr,i;
    ptr=&a[0];
    for ( i = 0; i < 5; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    getch();
    
}