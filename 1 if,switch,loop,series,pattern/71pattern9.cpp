/*
5 5 5 5 5
4 4 4 4
3 3 3 
2 2
1
*/
#include<iostream>
#include<conio.h>
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
            cout<<" "<<row;
        }
        cout<<endl;
    }
    getch();
}