//***** 
//*   *
//*   *
//*   *
//***** 

/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==1||r==n||c==1||c==n)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
}*/

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
        for(c=1;c<=n;c++)
        {
            if(r==1||r==n||c==1||c==n)
            {
                cout<<r;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
}