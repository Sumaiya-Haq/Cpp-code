#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,n,m;
    int a[10][10],b[10][10],c[10][10];
    cout<<"Enter the numbers of row: ";
    cin>>n;
    cout<<"Enter the numbers of colums: ";
    cin>>m;

    // first 2D array initialization
    cout<<"Enter the elements for the first matrix: "<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<"a["<<row<<"]["<<col<<"]= ";
            cin>>a[row][col];
        }
    }
    //first 2D array printing
    cout<<"1st matrix is :"<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    // second 2D array initializatin
    cout<<"Enter the elements for the second matrix: "<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<"b["<<row<<"]["<<col<<"]= ";
            cin>>b[row][col];
        }
    }
    //second 2D array printing
    cout<<"2nd matrix is: "<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<b[row][col]<<" ";
        }
        cout<<endl;
    }
    //substraction of array
    cout<<"substraction elements is:"<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            c[row][col]=a[row][col]-b[row][col];
            cout<<a[row][col]<<"-"<<b[row][col]<<" ";
        }
        cout<<endl;
    }

    //printing substraction
    cout<<"substraction is:"<<endl;
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            cout<<c[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}
