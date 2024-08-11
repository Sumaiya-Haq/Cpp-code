#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double fahren,celsius;

    cout<<"Enter celsius : ";
    cin>>celsius;

    fahren=1.8*celsius+32;

    cout<<"Fahrenheit is: "<<fahren;
    getch();
}
