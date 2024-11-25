/*Write a program to print the volume of a box by creating a class 
named Volume with an initialization list to initialize its length, 
breadth, and height.(just to make you familiar with initialization 
lists)*/
#include<iostream>
#include<cmath>
using namespace std;
class volume
{
    public:
    double calculateVolume(double length,double breadth,double height) const {
        return length * breadth * height;
    }
};
int main() {
    volume box;
    double length, breadth, height,total;

    // Taking input from the user
    cout << "Enter the length of the box: ";
    cin >> length;
    cout << "Enter the breadth of the box: ";
    cin >> breadth;
    cout << "Enter the height of the box: ";
    cin >> height;

    // Calculating and displaying the volume
    total = box.calculateVolume(length,breadth,height);
    cout << "Volume of the box: " << total << " cubic units" << endl;

    return 0;
}