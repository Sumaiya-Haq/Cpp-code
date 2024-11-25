/*Write a program to find the greatest and the smallest among 
three numbers using pointers.*/
/*#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    int *p1,*p2,*p3;
    cout<<"Enter three numbers =";
    cin>>a>>b>>c;
    p1=&a;
    p2=&b;
    p3=&c;
    if(( *p1>*p2)&& (*p1>*p3))
    {
        cout<<"Greatest is = "<<*p1;
    }
   else if(( *p1<*p2)&& (*p2>*p3))
    {
        cout<<"Greatest is = "<<*p2;
    }
    else
    {
        cout<<"Greatest is = "<<*p3;
    }

    if(( *p1<*p2)&& (*p1<*p3))
    {
        cout<<"smallest is = "<<*p1;
    }
   else if(( *p1>*p2)&& (*p3>*p2))
    {
        cout<<"smallest is = "<<*p2;
    }
    else
    {
        cout<<"smallest is = "<<*p3;
    }

    return 0;
}*/
#include<iostream>
using namespace std;
void desplay(int *p1 ,int *p2,int *p3)
{
    if(( *p1>*p2)&& (*p1>*p3))
    {
        cout<<"Greatest is = "<<*p1;
    }
   else if(( *p1<*p2)&& (*p2>*p3))
    {
        cout<<"Greatest is = "<<*p2;
    }
    else
    {
        cout<<"Greatest is = "<<*p3;
    }

    if(( *p1<*p2)&& (*p1<*p3))
    {
        cout<<"smallest is = "<<*p1;
    }
   else if(( *p1>*p2)&& (*p3>*p2))
    {
        cout<<"smallest is = "<<*p2;
    }
    else
    {
        cout<<"smallest is = "<<*p3;
    }

}
int main()
{
  int a,b,c;
    int *p1,*p2,*p3;
    cout<<"Enter three numbers =";
    cin>>a>>b>>c;
    p1=&a;
    p2=&b;
    p3=&c;
    desplay(&a,&b,&c);
    return 0;
}