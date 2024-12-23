#include<iostream>
using namespace std;
class point
{
private:
    int x,y;
public:
    point(int a,int b);//parameterize constractor.
    point(int c):point(c,c){}
    void display()
    {
        cout<<x<<","<<y<<endl;
    }   
};
point::point(int a,int b)
{
    x=a;
    y=b;
}
int main()
{
    point p1(1,2);  //implicit call
    point p2= point(4);  //explicit call
    cout<<"Point p1= ";
    p1.display();
    cout<<"Point p2= ";
    p2.display();
    return 0;
}
