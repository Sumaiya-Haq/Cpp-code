/*Write a program to print the value of the address of the pointer 
to a variable whose value is input from the user.*/
#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p=&a;
    cout<<"Enter your pointer input= ";
    cin>>a;
    cout<<"Value of the address is= "<<*p;
    return 0;
}