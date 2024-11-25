#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[]="Sumaiya";
    int i=0;
    while(name[i]!='\0')
    {
        cout<<name[i]<<endl;
        i++;
    }
    getch();
}