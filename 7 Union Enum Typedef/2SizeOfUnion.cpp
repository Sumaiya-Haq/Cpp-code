#include<iostream>
#include<conio.h>
using namespace std;
union testt1
{
    int x,y;
};
union testt2
{
    char ch;
    int x;
};
union testt3
{
    char name[20];
    double d;
};
int main(){

union testt1 t1;
union testt2 t2;
union testt3 t3;
cout<<"Sizeof(t1)= "<<sizeof(t1)<<endl;
cout<<"Sizeof(t2)= "<<sizeof(t2)<<endl;
cout<<"Sizeof(t3)= "<<sizeof(t3)<<endl;
getch();

}
