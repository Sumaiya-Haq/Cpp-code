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
cout << "Enter the position where you insert an element: ";
cin >>b;
cout << "Enter the elemrent that you want to insert: ";
cin >> c;
for (int i=a ; i>=b ;i--){
    A[i]=A[i+1];
    if(i==b){
        A[i+1]=c;
        a++;
    }

}
for (int i= 0; i<a ;i++){
    cout<<A[i]<<",";
}
}