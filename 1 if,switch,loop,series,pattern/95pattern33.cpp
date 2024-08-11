#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter any number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    getch();
    }