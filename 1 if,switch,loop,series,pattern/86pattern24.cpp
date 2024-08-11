//     A
//    AB
//   ABC
//  ABCD
// ABCDE
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
         cout<<char(c+64);
        }
      cout<<endl;
    }
    
    getch();
}*/


//     A
//    BB
//   CCC
//  DDDD
// EEEEE
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
         cout<<char(r+64);
        }
      cout<<endl;
    }
    
    getch();
}