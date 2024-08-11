#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int value,i,position=-1,n;
     cout<<"Enter number of student id:";
    cin>>n;
    int num[n];
    for ( i = 0; i <n; i++)
    {
        cout<<"i'd of student "<<i+1<<"=";
        cin>>num[i];
    }
    cout<<endl;
    cout<<"Enter the value you want to search: ";
    cin>>value;
    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            position=i+1;
            break;
        }
    }
        if(position==-1)
        {
            cout<<"Item is not found";
        }
        else{
            cout<<"The value position is : "<<position;
        }
        getch();
}