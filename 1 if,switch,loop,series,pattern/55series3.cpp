//1*2+2*3+3*4+.....+n1*n2=?
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,i,z,sum=0;
    cout<<"Enter the 1st number of the series:";
    cin>>n1;
    cout<<"Enter the 2nd number of the series:";
    cin>>n2;
    for ( i = 1; i <=n1; i=i+1)
    {
        for ( z = 2; z<=n2; z=z+2)
        {
            sum=sum+i*z;
        cout<<i*z<<" + ";
        }
    }
    cout<<"="<<sum;
    getch();
}