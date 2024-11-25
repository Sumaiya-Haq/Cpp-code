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
    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student alvi,safa;
    alvi.setvalue(12234,3.66);
    alvi.display();

    safa.setvalue(12345,4.5);
    safa.display();
    getch();

}
