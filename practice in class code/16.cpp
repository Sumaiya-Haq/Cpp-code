/*Write a function that will take a pointer and display the number 
on the screen. Take the number from the user and print
 it on the screen using that function.*/

 #include<iostream>
 using namespace std;
 void display(int *p)
 {
    cout<<"The number is= "<<*p;
 }
 int main()
 {
    int n;
    cout<<"Enter your numer= ";
    cin>>n;
    display(&n);
    return 0;  
 }