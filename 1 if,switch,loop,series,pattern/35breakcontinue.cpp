#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any n= ";
    cin>>n;

   for(i=1;i<=n;i=i+3)
   {
    if(i==10)
    {
        continue;
    }
    if(i>15)
    {
        break;
    }
    cout<<i<<endl;
   }
     
    getch();
}