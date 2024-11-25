/*Write a program that would print the information (name, year of 
joining, salary, address) of three employees by creating a class named
Employee. The output should be as follows:Name  Year of joining  Address
Robert    1994       64C- WallsStreat
Sam      2000        68D- WallsStreat
John     1999      26B- WallsStreat*/
#include<iostream>
#include<cmath>
using namespace std;
class employes
{
     public:
    string name,address;
    int year;
    void output(){
        cout<<name<<"\t"<<year<<"\t"<<address<<endl;
    }
};
int main(){
employes o[3];
for (int i=0;i<3;i++){
    cout<<"Enter employess name: ";
    cin>>o[i].name;
    cout<<"Enter joining year: ";
    cin>>o[i].year;
    cout<<"Entr address: ";
    cin>>o[i].address;
}
 cout<<"name"<<"\t"<<"joining year"<<"\t"<<"address"<<endl;
for(int i=0;i<3;i++){
    o[i].output();
}


    return 0;
}