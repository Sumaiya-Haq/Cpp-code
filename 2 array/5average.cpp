//write a prtogram that read n numbers and display average
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter number of student:";
    cin>>n;
    int students[n];

    //input
    for ( i = 0; i <n; i++)
    {
        cout<<"marks of student "<<i+1<<"=";
        cin>>students[i];
        sum=sum+students[i];
    }
    cout<<"Total marks: "<<sum<<endl;
    float avg=(float)sum/n;
    cout<<"Average is: "<<avg;
    getch();
}
    