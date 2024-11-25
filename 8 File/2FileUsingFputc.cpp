#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
int main()
{ 
    FILE *file;
    char name[30]= "Sumaiya Haq";
    int length= strlen(name);
    int i;

    file = fopen("test.text","w");
    if(file==NULL)
    {
        cout<<"File dosen't exist";
    }
    else{
        cout<<"File is exist"<<endl;
        for(i=0;i<length;i++)
        {
            fputc(name[i],file);
        }
        cout<<"File is written successfully";
        fclose(file);
    }
    getch();

}