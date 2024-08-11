#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cout<<"Enter any n= ";
    cin>>n;

    i=1;
    while (i<=n)
    {
        cout<<"digit: "<<i<<endl;
        i++;
    }
    cout<<"End of while loop";
    getch();
}