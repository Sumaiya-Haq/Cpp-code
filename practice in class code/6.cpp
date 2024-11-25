//takes the radious of a circle and returns the calculated area of circle.
#include<iostream>
using namespace std;
inline float circle_area(float n)
{
return n*n*3.1416;;
} 
int main()
{
    float n,area;
    cin>>n;
    area=circle_area(n);
    cout<<"Calculated area of a circle= "<<area;
    circle_area(n);
    return 0;
}
