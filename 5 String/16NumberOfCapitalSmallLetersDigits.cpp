#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[100];
    int capital=0,small=0,digit=0,i=0;

    cout<<"Enter any string= ";
    gets(str1);

    while(str1[i]!='\0')
    {
        if(str1[i]>=65 && str1[i]<=90)
        {
            capital++;
        }
        else if(str1[i]>=97 && str1[i]<=122)
        {
            small++;
        }
        else if(str1[i]>=48 && str1[i]<=57)
        {
            digit++;
        }

        i++;
    }
    cout<<"Number of capital letter= "<<capital<<endl;
    cout<<"Number of small letter= "<<small<<endl;
    cout<<"Number of digit = "<<digit<<endl;

    getch();

}