#include<iostream>
#include<conio.h>
using namespace std;
union test
{
    int x,y;
};
int main()
{
    union test t1;
    t1.x=10;
    cout<<"T1.X= "<<t1.x<<endl;
    cout<<"T1.Y= "<<t1.y<<endl;
    getch();
}