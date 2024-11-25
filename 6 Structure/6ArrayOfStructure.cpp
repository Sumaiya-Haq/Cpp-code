#include<iostream>
#include<conio.h>
using namespace std;
//Global structures
struct person
{
    int age;
    float salary;
};
int main()
{
    struct person person[4];
    int i;
    for ( i = 0; i <4; i++)
    {
       cout<<"Enter information for person["<<i+1<<"]"<<endl;
       cout<<"Enter age:";
       cin>>person[i].age;
       cout<<"Enter salary:";
       cin>>person[i].salary;

    }
    cout<<endl<<endl;
    
    for(i=0;i<4;i++)
    {
        cout<<"Information for person ["<<i+1<<"]"<<endl;
        cout<<"age= "<<person[i].age<<endl;
        cout<<"salary= "<<person[i].salary<<endl;;
    }
    getch();
}