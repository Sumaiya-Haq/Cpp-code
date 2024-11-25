#include<iostream>
using namespace std;
class multiplication
{
    public:
    int mul(int num1, int num2)
    {
        int m=num1*num2;
        return m;
    }
};
int main()
{
    multiplication calculate;
    int num1,num2,n;
    cin>>num1;
    cin>>num2;
    n=calculate.mul(num1,num2);
    cout<<n;
}