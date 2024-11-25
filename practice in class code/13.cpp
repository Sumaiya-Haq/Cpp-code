/*Write a program to print the address of the pointer to a variable
 whose value is input from the user.*/
 #include<iostream>
 using namespace std;
 int main()
 {
    int a;
    int *p=&a;
    cout<<"Enter your variable = ";
    cin>>a;
    cout<<"Address of the pointer to the input is = "<<&p<<endl;
    cout<<"Address stored in the pointer = "<<p<<endl;
    return 0;
    
 }