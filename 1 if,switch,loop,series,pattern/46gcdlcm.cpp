#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1,n2,num1,num2,reminder,gcd,lcm;
    cout<<"Enter 2 number:";
    cin>>num1>>num2;
    n1=num1;
    n2=num2;
    while (n2!=0)
    {
        reminder=n1%n2;
        n1=n2;
        n2=reminder;
    }
    gcd=n1;
    lcm=(num1*num2)/gcd;
    cout<<"Gcd= "<<gcd<<endl;
    cout<<"Lcm= "<<lcm;
    getch();
    
}