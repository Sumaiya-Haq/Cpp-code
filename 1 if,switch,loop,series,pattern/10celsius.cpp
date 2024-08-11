#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double fahren,celsius;

    cout<<"Enter fahren : ";
    cin>>fahren;

    celsius=(fahren-32)/1.8;

    cout<<"Celsius is: "<<celsius;
    getch();
}