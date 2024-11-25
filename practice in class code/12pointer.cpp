/*Write a program to print the address of a variable whose value 
is input from the user.*/
 #include<iostream>
 using namespace std;
  int main()
  {
    int a;
    cout <<"Enter your variable= ";
    cin>>a;
    cout<<"Youir variable address is = "<<&a<<endl;
    return 0; 
  }