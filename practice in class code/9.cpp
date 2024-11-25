/*Rahul loves to play with numbers, he challenges his friend Ankush with a
problem related to numbers in which he has to first reverse the order of two digits and
then swap them. Let us take the two digits as a and b.

Example 1:
Input:
a = 1234
b = 67890
Output:
9876 4321
Explanation: Reversing the given two numbers
will give: 4321 and 9876. After swapping it
would come as: 9876 and 4321.*/

#include<iostream>
using namespace std;
void reverce_dig(int &a,int &b)
{
   int num;
   num=a;
   int reverse1=0,reverse2=0;
   while(num!=0)
   {
    int digit=num%10;
    reverse1=reverse1*10+digit;
    num=num/10;
   }
   a=reverse1;

   num=b;
    while(num!=0)
   {
    int digit=num%10;
    reverse2=reverse2*10+digit;
    num=num/10;
   }
   b=reverse2;
}
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()

{
    int a,b;
    cout<<"Enter your first number= ";
    cin>>a;
    cout<<"Enter your second nmber = ";
    cin>>b;
    cout<<"Before reversing= "<<a<<","<<b<<endl;
    reverce_dig(a,b);
    swap(a,b);
    cout<<"After reversing= "<<a<<","<<b;
    return 0;
}