#include<iostream>
using namespace std;
int main()
{
    int a[10]={2,4,5,7,9};
    int size=5;
    int index, value;
    cout<<"Enter the index(0 to "<<size<< ") where you want to insert: ";
    cin>>index;
    if(index<0||index>size)
    {
        cout<<"Invalid index!"<<endl;
    }
    cout<<"Enter the value to insert: ";
    cin>>value;
    for(int i=size;i>index;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=value;
    size++;
    cout<<"Array after insertion: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}