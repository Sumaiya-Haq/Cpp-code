/*Create a class named &#39;Student&#39; with a string variable &#39;name&#39; and an integer variable
&#39;roll_no&#39;. Assign the value of roll_no as &#39;2&#39; and that of the name as &quot;John&quot; by creating an
object of the class Student.*/
#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    void display()
    {
        cout<<"Name= "<<name<<endl;
        cout<<"roll_no= "<<roll_no<<endl;
    }

};
int main()
{
    student details;
    details.name="John";
    details.roll_no=2;
    details.display();

}