#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{
    FILE *file;
    char name[30];
     file = fopen("test.text","w");
    if(file==NULL)
    {
        cout<<"File dosen't exist";
    }
    else{
        cout<<"File is exist"<<endl;
        cout<<"Enter your name : ";
        gets(name);

        fputs(name,file);
        cout<<"File is written successfully";
        fclose(file);
    }
     getch();
}