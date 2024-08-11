/*
A
B B
C C C
D D D D
E E E E E
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
            cout<<" "<<char(row+64);
        }
        cout<<endl;
    }
    getch();
}