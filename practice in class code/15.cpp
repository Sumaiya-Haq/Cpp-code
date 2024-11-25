/*Write a program to print a number entered from the 
keyboard using a pointer.*/
#include<iostream>
using namespace std;
int main()
{
  int n;
  int *p;
  p=&n;
  cout<<"Enter your numkber = ";
  cin>>n;
  cout<<"Number is= "<<*p;
  return 0;
}