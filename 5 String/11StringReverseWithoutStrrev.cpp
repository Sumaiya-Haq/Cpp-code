#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[30]="Sumaiya Haq";
    char str2[20];
    int i=0,j=0,len=0;
    while (str1[i]!='\0')
    {
        i++;
        len++;
    }
    for (j=0, i = len-1;i>0; i--, j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    cout<<"Str1= "<<str1<<endl;
    cout<<"str2= "<<str2<<endl;
    getch();
}