/*
* * * * *
* * * *
* * *
* * 
*
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter any number= ";
    cin>>n;
    for ( row = n; row>=1; row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    getch();
}