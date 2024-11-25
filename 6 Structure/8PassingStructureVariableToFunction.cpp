#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
//Global structures
struct person
{
    char name[100];
    int age;
    float salary;
};
void display( struct person p)
{
    cout<<"Name= "<<p.name<<endl;
    cout<<"age= "<<p.age<<endl;
    cout<<"salary= "<<p.salary<<endl;
}
int main()
{
    struct person person1;

    strcpy(person1.name,"suma");
    person1.age=22;
    person1.salary=12345;
    display(person1);
    getch();
}