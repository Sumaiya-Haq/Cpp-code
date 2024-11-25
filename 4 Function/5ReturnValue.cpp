#include<iostream>
#include<conio.h>
using namespace std;
double addition(double,double);
int main()
{
    cout<<addition(10.4,20.3);
    getch();
}
double addition (double a,double b)
{ double sum=a+b;
  return sum;
}