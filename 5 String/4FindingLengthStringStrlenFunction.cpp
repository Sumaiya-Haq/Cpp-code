#include<iostream>
#include<cstring>//include this for strlen
using namespace std;
int main()
{
    char name[]="Sumaiya";
    int len;
    len= strlen (name);//compute the length of the string
    cout<<"Length= "<<len<<endl;
    return 0;
}