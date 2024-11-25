//Constractor is a special type of functin that is used to initialize the object.

#include<iostream>
#include<conio.h>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"Default constractor"<<endl;
    }
};
int main()
{
    student ob;
    student alvi(12234,3.66);
    alvi.display();

    student safa(12345,4.5);
    safa.display();
    getch();

}
