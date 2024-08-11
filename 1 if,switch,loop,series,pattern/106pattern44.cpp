//*
//** 
//* *
//*  *
//***** 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,c,r;
    cout<<"Enter number:";
    cin>>n;
    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n;c++)
        {
            if(r==c||r==n||c==1){
            cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    getch();
}