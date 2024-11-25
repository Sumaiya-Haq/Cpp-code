/*Write a program to reverse the digits of a number using pointers.*/
#include<iostream>
using namespace std;
void revercenumber(int *n)
{
    int reversed=0;
    int reminder;
    while (*n!=0)
    {
        reminder=*n%10;
        reversed=reversed*10+reminder;
        *n=*n/10;
    }
    cout<<"The reverce number is = "<<reversed<<endl;
}
int main()
{
    int number;
    cout<<"Enter your number= ";
    cin>>number;
    revercenumber(&number);
    return 0;

}