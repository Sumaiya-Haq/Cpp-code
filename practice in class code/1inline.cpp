//write a c++ program to convert a decimal number to binzry by inline function.

#include<iostream>
using namespace std;
inline void decimal(int n)
{
    if (n>1){
     decimal(n/2);
    }
     cout<<n%2;
}
int main()
{
    int n;
    cout<<"Enter your decimal number= "<<endl;
    cin>>n;
     cout<<"binary number= ";
     decimal(n);
     return 0;

}