#include<iostream>
using namespace std;
class overload{
    private:
    int a;
    int b;
    public:
    overload(int num1,int num2)
    {
        int result;
        a=num1;
        b=num2;
        result=a-b;
        cout<<"Result is = "<<result<<endl;
    }
    void operator +()
    {
      a=+a;
      b=-b;
    }
    void display()
    {
        cout<<"number 1= "<<a<<endl<<"number 2="<<b<<endl;
    }
};
int main(){
    overload over(6,9);
    +over;
    over.display();
    return 0;
}