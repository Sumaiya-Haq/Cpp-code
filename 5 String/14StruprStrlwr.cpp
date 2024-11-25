#include<iostream>
#include<conio.h>
#include<cstring>//header file for string
using namespace std;
int main()
{
    char str1[]="sumaiya";
    char str2[]="HAq";

    strupr(str1);
    strlwr(str2);

    cout<<"String upper is= "<<str1<<endl;
    cout<<"String lower is= "<<str2<<endl;
    
    getch();

}