//     1
//    121
//   12321
//  1234321
//   12321
//    121
//     1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
           cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        for(c=r-1;c>=1;c--)
        {
            cout<<c;
        }

        cout<<endl;
    }
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
           cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<c;
        }
        for(c=r-1;c>=1;c--)
        {
            cout<<c;
        }

        cout<<endl;
    }
    getch();
}