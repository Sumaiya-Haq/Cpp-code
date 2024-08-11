//1+3+5+.....+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the last number of the series:";
    cin>>n;
    for ( i = 1; i <=n; i=i+2)
    {
        sum=sum+i;
        cout<<i<<" + ";
    }
    cout<<"="<<sum;
    getch();
}