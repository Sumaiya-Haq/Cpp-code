#include <iostream>
using namespace std;

int main(){
int a,b,c;
cout <<"Enter the size of an array: ";
cin>>a;
int A[a];
cout <<" Enter the element of this array: ";
for (int i=0;i<a;i++){
    cin >> A[i];
}
cout << "Enter the position where you delate an element: ";
cin >>b;

for (int i=b-1 ; i<a ;i++){
    A[i]=A[i+1];
    
}
a--;
for (int i= 0; i<a ;i++){
    cout<<A[i]<<",";
}
}