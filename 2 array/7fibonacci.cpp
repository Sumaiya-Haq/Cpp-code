#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"how many fibonaccci numbers:";
    cin>>n;
    int fibo[n];
    fibo[0]=0;
    fibo[1]=1;
    for(i=2;i<n;i++)
    {
        fibo[i]=fibo[i-1]+fibo[i-2];
    }
    cout<<endl;
    for(i=0;i<n;i++)
    {
        cout<<fibo[i]<<" ";
    }
    getch();
}