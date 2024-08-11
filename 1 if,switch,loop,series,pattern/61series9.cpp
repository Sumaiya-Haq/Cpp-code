#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,first=0,second=1,count=0,fibonacci;
    cout<<"Enter fibonacci number= ";
    cin>>n;
    while (count<n)
    {
        if (count<=1)
        {
           fibonacci=count;
        }
        else{
            fibonacci=first+second;
            first=second;
            second=fibonacci;
        }
    cout<<" "<<fibonacci;
        count++;
    }
    
    getch();
}
    