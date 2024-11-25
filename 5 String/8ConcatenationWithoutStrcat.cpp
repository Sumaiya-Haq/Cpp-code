#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[50]="my name is ";
    char str2[]="Sumaiya Haq";
    int i=0,j=0,len=0;

    while(str1[i]!='\0')
    {
       i++;
       len++;
    }
     
    while (str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    cout<<"str1= "<<str1;
    getch();
}