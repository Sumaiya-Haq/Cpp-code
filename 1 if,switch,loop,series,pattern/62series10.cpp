#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,first=2,second=1,i,Lucas;
    cout<<"Enter Lucas number= ";
    cin>>n;
    cout<<first<<" "<<second;
    for ( i = 3; i <=n; i++)
    {
        Lucas=first+second;
        first=second;
        second=Lucas;
        cout<<" "<<Lucas;
    }
    getch();
}
    