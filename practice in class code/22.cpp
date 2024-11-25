/*Write a program to find the Fibonacci series using pointers.*/
#include<iostream>
using namespace std;
void findfibonacci(int *n)
{
    int a=0,b=1,next;
    cout<<"Fibonaci series is= "<<a<<","<<b;
    for(int i=2;i<*n;i++)
    {
        next=a+b;
        a=b;
        b=next;
        cout<<","<<next;
    }

}
int main()
{
    int n,a,b,next;
    cin>>n;
    findfibonacci(&n);
}