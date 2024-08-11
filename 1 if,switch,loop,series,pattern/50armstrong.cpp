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
        sum=sum+reminder*reminder*reminder;
        temporary=temporary/10;
    }
    if(num1==sum)
    {
        cout<<sum<<" is armstrong number.";
    }
    else{
        cout<<sum<<" is not armstrong number.";
    }
    getch();
}
    