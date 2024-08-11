#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n,fact=1;
    cout<<"Enter any n= ";
    cin>>n;

   for(i=1;i<=n;i++)
   {
    fact=fact*i;
   }
   cout<<n<<" factorial is= "<<fact;
     
    getch();
}