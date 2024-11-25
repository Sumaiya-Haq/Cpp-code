#include<iostream>
#include<conio.h>
using namespace std;
void sum(int a,int b)
{
    int add=a+b;
    cout<<"Sum of Two Parameters:"<<add<<endl;
}
void sum(int a,int b,int c)
{
    int add=a+b+c;
    cout<<"Sum of Three Parameters:"<<add<<endl;
}
int main()
{
    sum(10,20);
    sum(5,35,20);
    getch();
}