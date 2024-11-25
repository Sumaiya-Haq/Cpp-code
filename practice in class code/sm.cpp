/*#include<iostream>
using namespace std;
int febonacci(int &a,int &b){
    int next;
    next=a+b;
    a=b;              //calculating part
    b=next;
    return b;
}

int main(){
cout<<"Enter the numbe of turms: ";
int n,a,b;
cin>>n;
if(n==1){
    cout <<"Febonacci series is 0";
}
else if (n<1){
    cout <<"please enter a positive number";
}
else{
    a=0,b=1;
    cout <<"Febonacci series is: "<<a<<","<<b;
    for (int i=2;i<n;i++){
        
         febonacci(a,b);
         cout<<","<<b;
    }
}
}*/


/*Rahul loves to play with numbers, he challenges his friend Ankush with a
problem related to numbers in which he has to first reverse the order of two digits and
then swap them. Let us take the two digits as a and b.

Example 1:
Input:
a = 1234
b = 67890
Output:
9876 4321
Explanation: Reversing the given two numbers
will give: 4321 and 9876. After swapping it
would come as: 9876 and 4321.*/

/*#include <iostream>
using namespace std;

// Function to reverse an integer without leading zeros
int reverseNumber(int &inp1,int &inp2) {
    int num = inp1;
    int reverse1 = 0,reverse2=0;

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reverse1 = reverse1 * 10 + digit; // Append digit to the reverse1 number
        num =num/ 10;  // Remove the last digit from num
    }

    // Update the original variable with the reverse1 number
    inp1 = reverse1; 
    num=inp2;
    // Reverse the number
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reverse2 = reverse2 * 10 + digit; // Append digit to the reverse2 number
        num =num/ 10;  // Remove the last digit from num
    }

    // Update the original variable with the reverse1 number
    inp2 = reverse2; 
  
}
void swap(int &n1,int &n2){
    int temp;
    temp=n1;
    n1=n2;
    n2=temp;
    
}

int main() {
    int a, b,c,d;
    cout << "Enter your first integer number: ";
    cin >> a;
    cout << "Enter your second integer number: ";
    cin >> b;

    cout << "Before reversing: " << a << " " << b << endl;

    // Reverse both numbers
   reverseNumber(a,b);
  
    swap(a,b);
    // Print the reverse1 and swap numbers
     cout << "After reversing: " << a << " " << b << endl;
   

    return 0;
}*/

/*Rakib, Hasan and Purno are three friends. They are doing the C++ course in the
semester fall 2022. One day in the class the course instructor took a class test

where each of them scored well. Now the course instructor wants to find who
got the highest number using a program. Write a program for the course
instructor using call by reference to find who got the highest mark in the class test*/
/*#include <iostream>
using namespace std;

// Function to determine the highest mark among three students
int calculate(float &num1, float &num2, float &num3) {
    // Check if num1 (Rakib's mark) is greater than both num2 (Hasan's mark) and num3 (Purno's mark)
    if ((num1 > num2) && (num1 > num3)) {
        return num1;  // Return Rakib's mark if it is the highest
    }
    // Check if num2 (Hasan's mark) is greater than num1 and num3
    else if ((num3 > num1) && (num2 > num3)) {
        return num2;  // Return Hasan's mark if it is the highest
    }
    else {
        return num3;  // Otherwise, return Purno's mark (as it is assumed to be the highest)
    }
}

float main() {
    float a, b, c, h;  // Declare variables for the marks and highest mark
    cout << "Enter Rakib's mark: ";  // Prompt user for Rakib's mark
    cin >> a;  // Read Rakib's mark
    cout << "Enter Hasan's mark: ";  // Prompt user for Hasan's mark
    cin >> b;  // Read Hasan's mark
    cout << "Enter Purno's mark: ";  // Prompt user for Purno's mark
    cin >> c;  // Read Purno's mark
    
    h = calculate(a, b, c);  // Call the calculate function to find the highest mark
    
    // Determine which student got the highest mark and print the result
    if (h == a) {
        cout << "Rakib got the highest mark.";  // Output for Rakib
    }
    else if (h == b) {
        cout << "Hasan got the highest mark.";  // Output for Hasan
    }
    else {
        cout << "Purno got the highest mark.";  // Output for Purno
    }

    return 0;  // End of program
}
*/
/*Write a program to print the address of the pointer to a variable whose value 
is input from the user.*/
/*#include <iostream>
using namespace std;

int main() {
    int a;
    int *p; // Declare p as a pointer to an int

    cout << "Enter your number: ";
    cin >> a;

    p = &a; // Store the address of a in the pointer p

    cout << "Address of the pointer to your input is: " << &p << endl;
    cout << "Address stored in the pointer : " << p << endl;

    return 0;
}*/

/*Write a program to reverse the digits of a number using pointers.*/
/*#include <iostream>
using namespace std;

// Function to reverse the digits of the number using pointers
void reverseNumber(int *num) {
    int reversed = 0;
    int remainder;
    
    // Reverse the digits
    while (*num != 0) {
        remainder = *num % 10;            // Get the last digit
        reversed = reversed * 10 + remainder;  // Append the last digit to reversed
        *num /= 10;                       // Remove the last digit from num
    }
    
    // Output the reversed number
    cout << "The reversed number is: " << reversed << endl;
}

int main() {
    int number;

    // Take input for the number
    cout << "Enter a number: ";
    cin >> number;

    // Call the function to reverse the digits
    reverseNumber(&number);

    return 0;
}*/


/*Write a program to print the name, salary, and date 
of joining of 10 employees in a company. Use an array of objects.*/
/* #include <iostream>
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


}*/

/*Write a program to print the roll number and average marks of 8 students in
 three subjects (each out of 100). The marks are entered by the user and the
  roll numbers are automatically assigned.*/
/*#include <iostream>
using namespace std;

class Student {
public:

    float average;
    int m1, m2, m3;
    int roll;

    void inputMarks(int r) {
        roll = r;
        cout << "Enter marks for Roll Number " << roll << ":" << endl;
        cout << "Enter marks for subject 1: ";
        cin >> m1;
        cout << "Enter marks for subject 2: ";
        cin >> m2;
        cout << "Enter marks for subject 3: ";
        cin >> m3;

        // Input validation
        if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
            cout << "Invalid marks entered. Please enter marks between 0 and 100.\n";
            inputMarks(r); // Retry for current student
        }
    }

    void calculateAverage() {
        average = (m1 + m2 + m3) / 3.0;
    }

    void display() {
        cout << "Roll Number: " << roll << "\nAverage Marks: " << average << endl;
    }
};

int main() {
    Student students[8];

    // Input marks for each student and calculate the average
    for (int i = 0; i < 8; i++) {
        students[i].inputMarks(i + 1);
        students[i].calculateAverage();
    }

    // Display details for each student
    for (int i = 0; i < 8; i++) {
        students[i].display();
    }

    return 0;
}*/
/*Write a program to calculate the average height of all the students of a class. 
The number of students and their heights entered by the user.*/

#include <iostream>
using namespace std;

class student{
    public: 
    int roll;
    float average,height;
    static float sum;


    void heights(int r){
        roll=r;
        cout<<"Enter the height in (inch) for roll no "<<roll<<" :\n";
        cin>>height;
        if (height<0){
            cout<<"Invalid height . Please enter the heights gretter then 0";
            heights(r);
        }
        sum=sum+height;
    }
    void calculation(int n){
         
        average=sum/n;
        cout<<"Average Height is = "<<average;
    }
};
float student::sum;
int  countstudent(){
     int n;
      cin>>n;
    if (n<= 0) {
        cout << "Invalid number of students.Please Enter again the student number: " << endl;
    countstudent();}
else{ return n;}
   
}

int main(){
    cout<<"Enter the number of student: ";
    int p;
   p=countstudent();
   
    student o[p],m;
    for(int i=0;i<p;i++){
        o[i].heights(i+1);
    }
m.calculation(p);
}
 
