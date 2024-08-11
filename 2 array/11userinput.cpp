#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col;
    int a[2][3];
    //2D array initializatin
    cout<<"Enter the elements for the matrix: "<<endl;
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<"a["<<row<<"]["<<col<<"]= ";
            cin>>a[row][col];
        }
    }
    //2D array printing
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
            cout<<a[row][col]<<" ";
        }
        cout<<endl;
    }
    getch();
}