//1^2x2^2x3^2x4^2x.....xn=?
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,multip=1;
    cout<<"Enter looping number= ";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        multip=multip*i*i;
        cout<<i<<"*";
    }
    cout<<" ="<<multip;
    getch();
    
}