//1
//2 3
//4 5 6
//7 8 9 10
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r,count=1;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++)
        {
           cout<<" "<<count++; 
    
        }
        cout<<endl;
    }
    getch();
}