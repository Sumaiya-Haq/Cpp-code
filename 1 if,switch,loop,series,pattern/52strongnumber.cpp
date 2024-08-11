#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0,reminder,temporary,factorial,i;
    cout<<"enter any number: ";
    cin>>n;
    temporary=n;
    while (temporary!=0)
    {
        reminder=temporary%10;
        factorial=1;
        for(i=1;i<=reminder;i++)
        {
            factorial=factorial*i;
        }
        sum=sum+factorial;
        temporary=temporary/10;
    }
    if (sum==n)
    {
        cout<<n<<" is a strong number.";
    }
    else
    {
        cout<<n<<" is not a strong number.";
    }
    
    getch();
}