#include<iostream>
#include<conio.h>
using namespace std;
int x=10;
int main()
{
    int x=20;
    ::x=25;
    cout<<::x<<endl;
    getch();
    
}