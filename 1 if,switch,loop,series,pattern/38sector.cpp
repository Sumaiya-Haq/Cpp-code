#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double radious,pi=3.1416,area,angel;
    cout<<"Enter radious= ";
    cin>>radious;
    cout<<"Enter angel= ";
    cin>>angel;

    area=(pi*radious*radious)*(angel/360);
    cout<<"Area of circle is= "<<area;
    getch();
}
