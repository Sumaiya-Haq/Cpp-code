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
    struct person person1={23,1234.67};  //Local variable
    struct person person2,person3;

    //Element wise assignment
    person2.age=24;
    person2.salary=2344.675;

    //Structure variable assignment
    person3=person2;

    if(person1.age==person2.age && person1.salary==person2.salary)
    {
        cout<<"Person1 equal to person2";
    }
    else{
        cout<<"person1 not equal to person2";
    }
  
    getch();
    
}
