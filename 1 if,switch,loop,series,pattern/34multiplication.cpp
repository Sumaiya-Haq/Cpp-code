#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any n= ";
    cin>>n;

  for(i=1;i<=10;i++)
  {
    cout<<n<<"X"<<i<<"="<<(n*i)<<endl;
  }
     
    getch();
}