#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any n= ";
    cin>>n;

    i=1;
   do
    {
        cout<<"Digit= "<<i<<endl;
        i++;
    }
    while (i<=n);
     
    getch();
}