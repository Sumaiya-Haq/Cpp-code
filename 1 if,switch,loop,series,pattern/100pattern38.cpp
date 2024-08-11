//   1
//  101
// 10101
//  101
//   1
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter any number";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<c%2;// printing star.
        }
        cout<<endl;
    }
    for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<c%2;// printing star.
        }
        cout<<endl;
    }
    getch();

}*/


//   1
//  000
// 11111
//  000
//   1
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter any number";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<r%2;// printing star.
        }
        cout<<endl;
    }
    for(r=n-1;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<r%2;// printing star.
        }
        cout<<endl;
    }
    getch();

}