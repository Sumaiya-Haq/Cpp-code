//virtual Function 
#include<iostream>
using namespace std;
class base
{

public:
    virtual void display()
    {
        cout<<"this is the function of base calss";
    }
};
class derived:public base
{
    public:
   void display()
    {
        cout<<"this is the function of derivad calss";
    }
};
int main()
{
    base*b;
    derived d;
    b=&d;
    b->display();
    return 0;
}


