//1^2+2^2+3^2+4^2+5^2+.....+n=?
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter any number";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        sum=sum+i*i;
        cout<<i<<"+";
    }
    cout<<"="<<sum;
    getch();
}