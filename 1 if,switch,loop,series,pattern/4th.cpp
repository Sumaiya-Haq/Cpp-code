/*
//Multiple input use
//addition
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,addition;
    cout<<"Enter your integer 2 number= ";
    cin>>num1>>num2;
    addition=num1+num2;
    cout<<"Your result is= "<<addition;
    getch();
}*/


/*
//subtraction
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,subtract;
    cout<<"Enter your integer 2 number= ";
    cin>>num1>>num2;
    subtract=num1-num2;
    cout<<"Your result is= "<<subtract;
    getch();
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //multiplication
    int num1,num2,multi;
    cout<<"Enter your integer 2 number= ";
    cin>>num1>>num2;
    multi=num1*num2;
    cout<<"Your result is= "<<multi;
    getch();
}*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Devition
   int num1,num2,reminder;
    cout<<"Enter your floting 2 number= ";
    cin>>num1>>num2;
     double devi= float (num1)/num2;  //type casting.
    cout<<"Your result is= "<<devi;
    cout<<endl;
     reminder=(num1)%num2;
    cout<<"your reminder is= "<<reminder;
    getch();
}
