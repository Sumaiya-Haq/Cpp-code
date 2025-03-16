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
    //trivarse
    cout <<"triverse: ";
    for (int i=0;i<a;i++){
        cout <<A[i];
    }
    cout<<endl;
//rivers
for (int i=0;i<a/2;i++){
    // for(int j=a-1;j>=0;j--){
        c=A[i];
        A[i]=A[a-i-1];
        A[a-i-1]=c;
    
}
cout <<"riverse: ";
for (int i=0;i<a;i++){
    cout <<A[i];
}

}