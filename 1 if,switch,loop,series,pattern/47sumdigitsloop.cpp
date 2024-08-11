#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,reminder,temporary,sum=0;
    cout<<"Enter any number:";
    cin>>num1;

    temporary=num1;
    while (temporary!=0)
    {
        reminder=temporary%10;
        sum=sum+reminder;
        temporary=temporary/10;
    }
    cout<<"Sum of digits is: "<<sum;
    getch();
}
    