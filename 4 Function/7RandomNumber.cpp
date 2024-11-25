#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,randomnumber;
    for ( i = 1; i < 5; i++)
    {
        randomnumber= rand()%5+1;
        cout<<"Random number="<<randomnumber<<endl;
    }
    getch();
    
}