/**Write a program to print the area of two rectangles having 
sides (4,5) and (5,8) respectively by creating a class named 
Rectangle ; with a function named Area  which returns the area. 
Length and breadth are passed as parameters to its function*/
#include<iostream>
#include<cmath>
using namespace std;
class Rectangle
{
    public:
    float area(float length,float breath)
    {
          return length*breath;
    }
};
int main()
{
    Rectangle rect;
    float area1,area2;
    area1=rect.area(7,8);
    cout<<"First area is= "<<area1<<" Units"<<endl;
    area2=rect.area(9,8);
    cout<<"Second area is= "<<area2<<" units"<<endl;

}