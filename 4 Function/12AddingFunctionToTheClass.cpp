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
};
int main()
{
    student alvi,safa;
    alvi.id = 102390;
    alvi.gpa = 4.30;
    alvi.display();

    safa.id = 102399;
    safa.gpa = 4.63;
    safa.display();
    getch();

}
