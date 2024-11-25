#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    while (1) // To do again and again ,condition is true always
    {
        int gussnumber,randomnumber;
        cout<<"Enter your guess between 1to 5 :";
        cin>>gussnumber;

        randomnumber=1+rand()%5; // to covert Range:1 to 5

        if(gussnumber==randomnumber)
        {
            cout<<"You have won"<<endl<<endl;
        }
        else{
            cout<<"You have lost,try again"<<endl;
            cout<<"Random number was:"<<randomnumber<<endl<<endl;
        }
    }
    getch();
}