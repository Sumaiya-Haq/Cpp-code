//     1
//    12
//   123
//  1234
//   123
//    12
//     1
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enterb any number: ";
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
        cout<<endl;
    }
        for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
         cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
         cout<<c;
        }
     cout<<endl;
    }
    getch();
}*/


//     1
//    22
//   333
//  4444
//   333
//    22
//     1
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enterb any number: ";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
         cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
         cout<<r;
        }
        cout<<endl;
    }
        for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
         cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
         cout<<r;
        }
     cout<<endl;
    }
    getch();
}