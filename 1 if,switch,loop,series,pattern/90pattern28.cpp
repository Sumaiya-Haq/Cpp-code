//10101
// 1010
//  101
//   10
//    1

/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enterb any number: ";
    cin>>n;
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
         cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
         cout<<c%2;
        }
      cout<<endl;
    }
    
    getch();
}*/


//11111
// 0000
//  111
//   00
//    1
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enterb any number: ";
    cin>>n;
    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++)
        {
         cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
         cout<<r%2;
        }
      cout<<endl;
    }
    
    getch();
}