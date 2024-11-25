//fibonaci series
#include<iostream>
using namespace  std;
inline void fibo(int n)
{
    int i,sum,first =0,second=1;
    for(i=1;i<=n;i++)
    {
      cout<<" "<<first<<endl;
      sum=first+second;
      first=second;
      second=sum;
     
    }
    cout<<sum;
} 
int main()
{
   int n,i,sum,first =0,second=1;
    cin>>n;
    fibo(n);
}
