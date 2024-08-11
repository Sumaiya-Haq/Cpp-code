/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Array declaration
    int numbers[5];

    //Array initialization
    numbers[0]=65;
    numbers[1]=23;
    numbers[2]=45;
    numbers[3]=78;
    numbers[4]=90;
    
    //Array printing
    cout<<numbers[0]<<" ";
    cout<<numbers[1]<<" ";
    cout<<numbers[2]<<" ";
    cout<<numbers[3]<<" ";
    cout<<numbers[4]<<" ";

    getch();
}*/


/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    //Array declaration and initialization
    int numbers[]={54, 67, 78, 90, 54};

    //Array printing
    cout<<numbers[0]<<" ";
    cout<<numbers[1]<<" ";
    cout<<numbers[2]<<" ";
    cout<<numbers[3]<<" ";
    cout<<numbers[4]<<" ";

    getch();
}*/


#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    //Array declaration and initialization
    int numbers[5]={54, 67, 78, 90, 54};

    //Array printing
    for ( i = 0; i <5; i++)
    {
        cout<<numbers[i]<<" ";
    }
    
   getch();
}