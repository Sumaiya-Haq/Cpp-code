#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char source[]="sumaiya Haq";
    char target[20];
    strcpy (target,source);
    cout<<"Source string="<<source<<endl;
    cout<<"Target string="<<target<<endl;
    getch();
}