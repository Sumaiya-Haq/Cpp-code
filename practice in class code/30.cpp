/*Write a program to print the area of a rectangle by creating a class
named Area having  two functions. The first function named setDim takes 
the length and breadth of the rectangle as parameters and the second 
function named getArea returns the area of the rectangle. The length 
and breadth of the rectangle are entered through the keyboard.*/
#include<iostream>
#include<cmath>
using namespace std;
class Area
{
 private:
 double length;
 double breadth;
 public:
 void setDim(double len,double brd)
 {
    length=len;
    breadth=brd;
 }
 double getArea() {
    return length*breadth;
 }
};
int main()
{
    Area Rectangle;
    double length,breadth;
    cout<<"Enter the length of a rectangle= ";
    cin>>length;
    cout<<"Enter the bteadth os a rectangle =";
    cin>>breadth;
    Rectangle.setDim(length,breadth);
    cout<<"Area of the rectangle: "<<Rectangle.getArea()<<" square units"<<endl;
    return 0;
}