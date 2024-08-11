#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    //Array declaration
    int numbers[5];
    for ( i = 0; i <5; i++)
    {
        cout<<"Number of student "<<i+1<<"=";//index number dont show 0 1 2 3 4 using +1 thats why index show 1 2 3 4 5. 
        cin>>numbers[i];
    }
    cout<<"Elements are: ";

    //Array printing
   for ( i = 0; i <5; i++)
    {
        cout<<numbers[i]<<" ";
    }

    getch();
}
    