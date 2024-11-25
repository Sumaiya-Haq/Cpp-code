/*Write a program to print the name, salary, and date of joining of 10 employees
 in a company. Use an array of objects.*/
 #include <iostream>
 #include <string>
 using namespace std;

 class employ{
    public:
    string name;
    static int no;
    double salary;
    int date_of_joining;
    void output(){
        cout<<no<<". "<<name<<"\t"<<salary<<"\t"<<date_of_joining<<endl;
        no++;
    }

 };
 int employ::no=1;
int main(){
employ s[10];
for (int i=0;i<10;i++){
    cout<<"Enter name: ";
    cin>>s[i].name;
    cout<<"Enter salary: ";
    cin>>s[i].salary;
    cout<<"Enter date of joining date: ";
    cin>>s[i].date_of_joining;
}
 cout<<"name"<<"\t"<<"salary"<<"\t"<<"date_of_joining"<<endl;
for (int i=0;i<10;i++){
    s[i].output();
}
}