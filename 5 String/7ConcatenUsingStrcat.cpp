#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[]="my name is ";
    char str2[]="Sumaiya Haq";
    strcat(str1,str2);
    cout<<"str1="<<str1;
    getch();
}