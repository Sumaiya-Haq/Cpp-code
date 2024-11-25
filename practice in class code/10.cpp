//Write a program in C++ to add numbers using call by reference.
#include<iostream>
using namespace std;
long add_two_numbers(long *a,long *b)
{
  long sum;
  sum=*a+*b;
  return sum;
}
int main()
{
    long a,b,result;
    cout<<"Enter your 1st number= ";
    cin>>a;
    cout<<"Enter your 2nd number= ";
    cin>>b;
   result= add_two_numbers(&a,&b);
    cout<<"your sum is= "<<result;
    return 0;
}