//      *
//     ***
//    *****
//   *******
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" "; //printing space
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<"*";// printing star.
        }
        cout<<endl;
    }
    getch();

}*/



/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<c;
        }
        cout<<endl;
    }
    getch();

}*/



/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<r;
        }
        cout<<endl;
    }
    getch();

}*/




/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<c%2;
        }
        cout<<endl;
    }
    getch();

}*/


/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<r%2;
        }
        cout<<endl;
    }
    getch();

}*/


/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<char(c+64);
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
    int n,r,c;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=2*r-1;c++)
        {
            cout<<char(r+96);
        }
        cout<<endl;
    }
    getch();

}