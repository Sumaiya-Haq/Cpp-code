#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    float n,i,sum=0;
    cout<<"Enter any loop number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        cout<<i<<"+";
    }
    cout<<"="<<sum;
    getch();
}