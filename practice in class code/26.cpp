/*Assign and print the roll number, phone number, and address of two
students having names Sam; and John; respectively by creating
two objects of the class Student.*/
#include<iostream>
#include<string>
using namespace std;
class students
{
    public:
    string name,address;
    int roll;
    string phone_number;
    void display()
    {
        cout<<"Name = "<<name<<endl;
        cout<<"roll is= "<<roll<<endl;
        cout<<"phone number is= "<<phone_number<<endl;
        cout<<"address is= "<<address<<endl<<endl;
    }

};
int main()
{
    students john,sam;

    sam.name="Sam";
    sam.roll=3;
    sam.phone_number="01557204";
    sam.address="bna#house44,road231";
    sam.display();

    john.name="Jhon";
    john.roll=2;
    john.phone_number="017204";
    john.address="sa#house43,road331";
    john.display();


}