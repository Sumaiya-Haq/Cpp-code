//Function overloading
#include<iostream>
using namespace std;
class sumation
{
public:
void calculation(int a,int b){
int sum;
sum=a+b;
cout<<"sum is= "<<sum<<endl;
}
void calculation(int a,int b,int c,int d){
    int multiplication;
    multiplication=a*b*c*d;
    cout<<"Multiplication is= "<<multiplication;
}
    
};
int main(){
    sumation s;
    s.calculation(21,43);
    s.calculation(32,1,2,3);
    return 0;
}

