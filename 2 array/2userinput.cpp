#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    //Array declaration
    int numbers[5];

  cin>>numbers[0];
  cin>>numbers[1];
  cin>>numbers[2];
  cin>>numbers[3];
  cin>>numbers[4];

    cout<<"Elements are: ";

    //Array printing
   for ( i = 0; i <5; i++)
    {
        cout<<numbers[i]<<" ";
    }

    getch();
}

    
