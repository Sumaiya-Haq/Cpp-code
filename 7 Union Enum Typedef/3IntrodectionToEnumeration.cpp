#include<iostream>
#include<conio.h>
using namespace std;
enum days_of_week
{
    sun,mon,tue,wed,thu,fri,sat
};
int main()
{
    enum days_of_week day1,day2;
    day1=sun;
    cout<<"Days= "<<day1;
    getch();
}