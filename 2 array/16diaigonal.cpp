#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10][10],r,c,i,j,sum=0;
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
    cout<<endl;
//sum of diagonal elements
cout<<"Printing diagonal elements: ";
for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            if(i==j)
            {
                cout<<a[i][j]<<" ";
                sum=sum+a[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"Sum of diagonal element:"<<sum;
    getch();

}