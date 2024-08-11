#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,i,j,k;
    int a[10][10],b[10][10],c[10][10];
    cout<<"Enter the numbers of row and colums for the first matrix: ";
    cin>>r1>>c1;
    cout<<"Enter the numbers of row and colums for the second matrix: ";
    cin>>r2>>c2;
    while (c1!=r2)
    {
        cout<<"Error!!colum of the first matrix not equal to row of the second matrix";

        cout<<"Enter the numbers of row and colums for the first matrix: ";
        cin>>r1>>c1;

        cout<<"Enter the numbers of row and colums for the second matrix: ";
        cin>>r2>>c2;
    }
    //taking input of first matrix
    cout<<"Enter the elements for the first matrix: "<<endl;
    for ( i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cout<<"a["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
    //taking input of second matrix
    cout<<"Enter the elements for the second matrix: "<<endl;
    for ( i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cout<<"b["<<i<<"]["<<j<<"]= ";
            cin>>b[i][j];
        }
    }
    //initializing the result matrix to zero
    for ( i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            c[i][j]=0;
        }
    }
    //multiplying matrix
    for ( i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            for(k = 0; k< c1; k++)
            {
            c[i][j]=c[i][j]+ a[i][k]*b[k][j];
            }
        }
    }
    //printing first matrix
    cout<<"First matrix is:"<<endl;
    for ( i = 0; i < r1; i++)
    {
        for(j = 0; j < c1; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
 //printing second matrix
 cout<<"second matrix is:"<<endl;
    for ( i = 0; i < r2; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    //printing result matrix
 cout<<"result matrix is:"<<endl;
    for ( i = 0; i < r1; i++)
    {
        for(j = 0; j < c2; j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    getch();
}

