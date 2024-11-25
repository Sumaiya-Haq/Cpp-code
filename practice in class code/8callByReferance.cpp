#include<iostream>
using namespace std;
int fibo(int &a,int &b)
{
    int next;
    next=a+b;
    a=b;
    b=next;
    return b;
}
int main()
{
  int n,a,b;
  cout<<"Enter input= ";
  cin>>n;
  if(n==1)
  {
    cout<<"fibonace series is 0 ";
  }
  else if(n<1)
  {
    cout<<"Enter your poasitive number ";
  }
  else{
    a=0,b=1;
    cout<<"fibonace series is ="<<a<<", "<<b;
    for (int i=2;i<n;i++)
    {
        fibo(a,b);
        cout<<","<<b;
    }
  }
}