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
        sum=sum*10+reminder;
        temporary=temporary/10;
    }
    cout<<"Sum of digits is: "<<sum<<endl;
    if (num1==sum)
    {
        cout<<sum<<" is palindrom";
    }
    else{
        cout<<sum<<" is not palindrom";
    }
    
    getch();
}
    