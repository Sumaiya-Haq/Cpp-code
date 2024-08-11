//    1
//   1  2
//  1  2  3
//1  2  3  4

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
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<" "<<c;
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
        for(c=1;c<=n-r;c++)
        {
            cout<<" ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<" "<<char(c+96);
        }
        cout<<endl;
    }
    getch();
}
