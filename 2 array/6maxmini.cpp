//wriyte a program read n numbers and display maxcimum and minimum. 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0,i,max,mini;
    cout<<"Enter number of student:";
    cin>>n;
    int students[n];

    //input
    for ( i = 0; i <n; i++)
    {
        cout<<"marks of student "<<i+1<<"=";
        cin>>students[i];
    }
    max=students[0];
    mini=students[0];
    for(i=1;i<n;i++)
    {
    if(max<students[i])
    {
       max=students[i];
    }
    if(mini>students[i])
    {
        mini=students[i];
    }
    }
     cout<<"maximum is: "<<max<<endl;
     cout<<"minimum is: "<<mini<<endl;
    getch();
}
    