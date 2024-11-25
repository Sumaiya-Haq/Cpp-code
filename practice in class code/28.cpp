/*Write a program to print the area and perimeter of a triangle 
having sides of 3, 4, and 5 units by creating a class named Triangle ; 
with a function having the three sides as its parameters*/
#include<iostream>
#include<cmath>
using namespace std;
class Triangle

{
public:
    int a,b,c;
    float perameter,area,s;
double printperamiter()
    {
        perameter=a+b+c;
        return perameter;
    }
    double printarea()
    {
        s=(a+b+c)/2;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }
    void dispaly()
    {
        printperamiter();
        printarea();
        cout<<"Area of triangle = "<<area<<"  Squre units"<<endl;
        cout<<"Area of a perimatre= "<<perameter<<"  Units"<<endl;
    }
};
int main()
{
    Triangle triangle;
    triangle.a=3;
    triangle.b=4;
    triangle.c=5;
    triangle.dispaly();

}