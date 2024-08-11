//using showpoint,Noshowpoint,setprecision.

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2,result;
    cout<<"Enter your 1st number= ";
    cin>>num1;
    cout<<"enter your 2nd number= ";
    cin>>num2;

    cout<<showpoint;//The result will be a show point.

    //setw(20)use space for answer .

    result=num1+num2;
    cout<<setw(25)<<"Your addition is = "<<result<<endl;

    cout<<noshowpoint;// The result will not show in decimal number.
    result=num1-num2;
    cout<<setw(25)<<"Your subtraction is = "<<result<<endl;

    result=num1*num2;
    cout<<setw(25)<<"Your multiplication is = "<<result<<endl;

    cout<<fixed;//count only decimal number not whole number & fixed setprecision.
    cout<<setprecision(3);//count whole number.And we use #include<iomanip> .
    result=num1/num2;
    cout<<setw(25)<<"Your divition is = "<<result<<endl;

    getch();
}
