#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,count=0;
     cout<<"enter any integer number: ";
     cin>>n;
     while (n!=0)
     {
        n=n/10;
        ++count;
     }
     cout<<"Counting Number is= "<<count;
     getch();
     
}