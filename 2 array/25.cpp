#include<iostream>
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