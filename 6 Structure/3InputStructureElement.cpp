#include<iostream>
#include<conio.h>
using namespace std;
//Global structures
struct person
{
    int age;
    float salary;
};

//struct person person1,person2;(Global variable)
//global variable ja kono function thaka use kora ji but local variable just acta function thaka user kora ji.
int main()
{
    struct person person1,person2;  //Local variable
    cout<<"Enter person 1 information:"<<endl;
    cout<<"Enter age= ";
    cin>>person1.age;
    cout<<"Enter salary= ";
    cin>>person1.salary;

    cout<<"Person1: "<<endl;
    cout<<person1.age<<endl;
    cout<<person1.salary<<endl;

    cout<<"Enter person 2 information:"<<endl;
    cout<<"Enter age= ";
    cin>>person2.age;
    cout<<"Enter salary= ";
    cin>>person2.salary;
    
    cout<<"Person2: "<<endl;
    cout<<person2.age<<endl;
    cout<<person2.salary<<endl;
  
    getch();
    
}
