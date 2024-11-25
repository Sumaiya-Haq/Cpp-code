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
    struct person person1,person2;
    person1.age = 22;
    person1.salary = 13000;

    cout<<"Person1: "<<endl;
    cout<<person1.age<<endl;
    cout<<person1.salary<<endl;

    person2.age = 25;
    person2.salary = 123000;

    cout<<"Person2: "<<endl;
    cout<<person2.age<<endl;
    cout<<person2.salary<<endl;
  
    getch();
    
}
