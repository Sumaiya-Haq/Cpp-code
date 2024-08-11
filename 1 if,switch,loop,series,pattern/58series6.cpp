
//1*2*3*4+....+n=?
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
        multip=multip*i;
        cout<<i<<"*";
    }
    cout<<" ="<<multip;
    getch();
    
}