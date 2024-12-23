//Function Overriding
#include<iostream>
using namespace std;
class partent{
    public:
    void display(){
        cout<<"This is the function of base class"<<endl;
    }
};
class child:public partent{
    public:
    void display(){
        cout<<"This is the function of derived class "<<endl;
    }
};
int main(){
    child object;
    object.display();
    return 0;
}