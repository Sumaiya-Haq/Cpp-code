//Special operator Sizeof & comma use.
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,c,sum;
    float f;
    double d;
    char ch;
    char name[30];

//Sizeof operator.
    c=sizeof(a);
    cout<<"c is: "<<c <<endl;

    c=sizeof(f);
    cout<<"c is: "<<c <<endl;

    c=sizeof(d);
    cout<<"c is: "<<c <<endl;

    c=sizeof(ch);
    cout<<"c is: "<<c <<endl;

    c=sizeof(name);
    cout<<"c is: "<<c <<endl;

   //Comma operator.
   sum=(a=20,c=30,sum=a+c);
   cout<<"sum is: "<<sum;
 
    getch();
}


