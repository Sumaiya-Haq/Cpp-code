/*Write a program to print the area and perimeter of a triangle
having sides of 3, 4, and 5 units by creating a class named Triangle 
with a function to print the area and perimeter.*/
#include<iostream>
#include<cmath>
using namespace std;
class Triangle

{
public:
    int a,b,c,perameter;
    float area,s;
    void printperamiter()
    {
        perameter=a+b+c;
        cout<<"Peramiter is= "<<perameter<<"  Units"<<endl;
    }
    void printArea()
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-1)*(s-b)*(s-c));
        cout<<"Area is= "<<area<<"  Squre units"<<endl;
    }
};
int main()
{
    Triangle triangle;
    triangle.a=3;
    triangle.b=4;
    triangle.c=5;
    triangle.printperamiter();
    triangle.printArea();
}


