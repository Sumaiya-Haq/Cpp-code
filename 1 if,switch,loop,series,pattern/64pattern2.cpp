/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5 */

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
            cout<<" "<<row;
        }
        cout<<endl;
    }
    getch();
}