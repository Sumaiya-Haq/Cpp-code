//1 2 3 4 5
// 1 2 3 4
//  1 2 3 
//   1 2
//    1
/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number:";
    cin>>n;
    for(r=n;r>=1;r--)
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
    for(r=n;r>=1;r--)
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
