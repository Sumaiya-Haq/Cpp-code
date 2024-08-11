//12345
// 1234
//  123
//   12
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
         cout<<c;
        }
      cout<<endl;
    }
    
    getch();
}*/


//55555
// 4444
//  333
//   22
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
         cout<<r;
        }
      cout<<endl;
    }
    
    getch();
}