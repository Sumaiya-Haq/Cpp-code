#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10][10],transpose[10][10],r,c,i,j;
    cout<<"Enter how many matrix row & colum you want:";
    cin>>r>>c;
    //Geting the elements for the matrix.
    for(i=0; i<r;i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
    //transpose matrix.
    for(i=0; i<r;i++)
    {
        for(j=0; j<c; j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    cout<<endl;

    //printinf A matrix.
    cout<<"A matrix is:"<<endl;
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    //printing transpose matrix.
    cout<<"Transpose matrix:"<<endl;
    for(i=0; i<c;i++)
    {
        for(j=0; j<r; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    getch();

}