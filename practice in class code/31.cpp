/*Write a program to print the area of a rectangle by creating a class 
named Area taking  the values of its length and breadth as parameters 
of its function and having a function named  return Area ; which
returns the area of the rectangle. The length and breadth of the 
rectangle are entered through the keyboard.*/
#include<iostream>
#include<cmath>
using namespace std;
class Area
{
    public:
    int return_area(int length,int breadth)
    {
        return length*breadth;
    }
};
int main()
{
    Area area;
    int length,breadth,rectangle;
    cout<<"Enter the length and breadth of a rectangle= ";
    cin>>length>>breadth;
    rectangle = area.return_area(length,breadth);
    cout<<"Area is "<<rectangle<<" units"<<endl;
    return 0;
}