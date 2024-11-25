#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[40]="Haq";
    char str2[30]="othai";
    char trmp[50];

    cout<<"Before swapping"<<endl;
    cout<<"string 1 is= "<<str1<<endl;
    cout<<"string 2 is= "<<str2<<endl<<endl;

    strcpy(trmp,str1);
    strcpy(str1,str2);
    strcpy(str2,trmp);

    cout<<"After swapping"<<endl;
    cout<<"string 1 is= "<<str1<<endl;
    cout<<"string 2 is= "<<str2<<endl;

    getch();

}