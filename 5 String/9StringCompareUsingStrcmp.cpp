#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[]="Sumaiya Haq";
    char str2[]="Sumaiya";
    int d;
    d=strcmp(str1,str2);
    if(d==0)
    {
        cout<<"String is equal";
    
    }
    else{
        cout<<"String is not equal";
    }
    getch();

}