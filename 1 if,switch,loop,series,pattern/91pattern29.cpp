//abcde
// abcd
//  abc
//   ab
//    a
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
         cout<<char(c+96);
        }
      cout<<endl;
    }
    
    getch();
}*/


//eeeee
// dddd
//  ccc
//   bb
//    a
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
         cout<<char(r+96);
        }
      cout<<endl;
    }
    
    getch();
}