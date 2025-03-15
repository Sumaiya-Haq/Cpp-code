#include<iostream>
using namespace std;
int main()
{
    int a[10]={2,4,6,8,10};
    int size=5;
    int index;
    cout<<"Enter the index(0 to "<<size<< ") where you want to remove: ";
    cin>>index;
    if(index<0||index>=size)
    {
        cout<<"Invalid index!";
    }
    for(int i=index;i<size-1;i++)
    {
        a[i]=a[i+1];
    }
    size--;
    cout << "Array after removal: ";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
        cout<<endl;
       
    }
    return 0;
}