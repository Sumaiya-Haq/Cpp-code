#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=32,b=12,c;

    c=a&b; //bitwise AND.
    cout<<"c is: "<<c <<endl;

    c=a|b; //bitwise OR.
    cout<<"c is: "<<c <<endl;

    c=a^b; //bitwise EXOR.
    cout<<"c is: "<<c <<endl;

    c=a>>3; //bitwise shift Right.
    cout<<"c is: "<<c <<endl;

    c=b<<4; //bitwise shift left.
    cout<<"c is: "<<c <<endl;

    getch();
}