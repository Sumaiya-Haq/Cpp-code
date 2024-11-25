/*Write a program to find the factorial of a number using pointers.*/
#include<iostream>
using namespace std;
void findfactorial(int *n)
{
    int factorial=1;
    for (int i = 1; i <=*n; i++)
    {
        factorial *=i;
        cout<<factorial;
    }
    cout<<"factorial if  "<<*n<<" is"<<factorial;
    
}
int main()
{
    int num,factorial;
    cin>>num;
    findfactorial(&num);
}