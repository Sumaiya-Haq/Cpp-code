//cube of the number upto given integer
#include<iostream>
using namespace std;
inline void cube_number(int n)
{
    int multiplication;
  for(int i=1;i<=n;i++)
  {
     multiplication=i*i*i;
  }
  cout<<multiplication;
} 
int main()
{
    int n,multiplication;
    cin>>n;

    cube_number(n);
    return 0;
}
