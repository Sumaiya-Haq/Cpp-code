#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[]="Sumaiya Haq";
    int i=0,len=0;

    while(name[i]!='\0')
    {
        i++;
        len++;
    }
    cout<<"Length= "<<len<<endl;
    getch();
}