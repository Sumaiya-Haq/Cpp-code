#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    FILE *file;
    file = fopen("test.text","w");
    if(file==NULL)
    {
        cout<<"File dosen't exist";
    }
    else{
        cout<<"File is exist";
        fclose(file);
    }
    getch();
}