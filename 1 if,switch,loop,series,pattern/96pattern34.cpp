//1
//24
//369
//48 12 16
//5 10 15 20 25
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
        for(c=1;c<=r;c++)
        {
            cout<<" "<<r*c;
        }
        cout<<endl;
    }
    getch();

}