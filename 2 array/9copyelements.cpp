#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
     cout<<"Enter number of student id:";
    cin>>n;
    int array1[n],array2[n];
    //eloements initializatioin
    for ( i = 0; i <n; i++)
    {
        cout<<"numbers of array "<<i+1<<"=";
        cin>>array1[i];
    }
    //array1 declearation
    cout<<"Array 1 is: ";
    for ( i = 0; i <n; i++)
    {
        cout<<array1[i]<<" ";
    }
    cout<<endl;
//copying array1 elements
    for ( i = 0; i <n; i++)
    {
        array2[i]=array1[i];
    }
    cout<<"Array 2 is: ";
    for ( i = 0; i <n; i++)
    {
        cout<<array2[i]<<" ";
    }
    getch();
}