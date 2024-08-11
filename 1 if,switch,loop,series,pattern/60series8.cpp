//sum=1-2+3-4+5-6+....n
//(1+3+5+...)(2-4-6-..)
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,even=0,odd=0;
    cout<<"Enter looping number= ";
    cin>>n;
    for ( i = 1; i <=n; i++)
    {
        if (i%2==0)
        {
            even=even+i;
        }
        else{
            odd=odd+i;
        }
    }
    cout<<odd-even;
    getch();
}

