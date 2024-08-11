#include<iostream>
#include<conio.h>
using namespace std;
void modifyvalue(int num)
{
    num=20;
}
int main()
{
    int num=10;
    cout<<"Before modification="<<num<<endl;
    modifyvalue(num);
    cout<<"Aftr mpdification="<<num<<endl;

    getch();

}