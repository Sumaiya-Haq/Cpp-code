/*
A
A B
A B C
A B C D
A B C D E
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter any number= ";
    cin>>n;
    for ( row = 1; row<=n; row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<" "<<char(col+64);
        }
        cout<<endl;
    }
    getch();
}