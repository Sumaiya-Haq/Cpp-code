#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {      // Abstract base class 'Student'.
protected:
    string name;
    int id;
public:
    virtual void getDetails() = 0;    //Pure vurtual function.
    virtual void calculateGrade() = 0;//Pure vurtual function.
    virtual void displayGrade() = 0;//Pure vurtual function.
    virtual ~Student() {} // Virtual destructor .
};
// Derived class.
class FindGrade : public Student {
private:
    float Q1, Q2, QT, midmarks, finalmarks;
    float percentage, percQ, percM, percF;
    string grade;

    void setMarks(float quiz1, float quiz2, float mid, float finalExam) { //method.
        Q2 = quiz2;
        midmarks = mid;
        finalmarks = finalExam;
    }

public:
    void getDetails() override { // Overridden method.
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter marks of Quiz # 1 out of (10): ";
        cin >> Q1;
        if (Q1<0||Q1>10){ //condition.
            cout <<"Error"<<endl;
          
        }
        cout << "Enter marks of Quiz # 2 out of (10): ";
        cin >> Q2;
         if (Q2<0||Q2>10){
            cout <<"Error"<<endl;
            
        }

        cout << "Enter marks of Mid-Term out of (100): ";
        cin >> midmarks;
         if (midmarks<0||midmarks>100){
            cout <<"Error"<<endl;
           
        }



        cout << "Enter marks of Final Exam out of (100): ";
        cin >> finalmarks;
         if (finalmarks<0||finalmarks>100){
            cout <<"Error"<<endl;
        }
    }

    
    void calculateGrade() override { //another Overridden method .
        QT = Q1 + Q2;
        percQ = (20.0 / 20.0) * QT;
        percM = (30.0 / 100.0) * midmarks;
        percF = (50.0 / 100.0) * finalmarks;
        percentage = percQ + percM + percF;

        if (percentage >= 90.0) //condition.
            grade = "A";
        else if (percentage >= 80.0)
            grade = "B";
        else if (percentage >= 70.0)
            grade = "C";
        else if (percentage >= 60.0)
            grade = "D";
        else
            grade = "Fail";
    }

    void displayGrade() override { // another overridden method.
        cout << "\nStudent Name: " << name;
        cout << "\nStudent ID: " << id;
        cout << "\nTotal Percentage: " << percentage << "%";
        cout << "\nGrade: " << grade << endl;


        ofstream outFile("student_grades.txt", ios::app);//save details in file with append mood.
        if (!outFile){ //condition
            cout <<"Error";
            return;
        }
        outFile<<name<<" "<<id<<" "<<percentage<<" "<<grade<<endl; //write to file.
            outFile.close();//use for close;
            cout << "Student details saved to file.\n";
            cout<<endl;

    }
     void loadFromFile(int id) { //using mathod for reading file.
        ifstream inFile("student_grades.txt");
        if (!inFile) {
            cerr << "Error opening file for reading.\n";
            return;
        }
            string name,grade;
            float total;
            long roll;
            bool found=false;

            while (inFile>>name>>roll>>total>>grade) { //use condition for reading details are match.
                if (id==roll){ //condition for id mathcing.
                    found=true;
                cout<<"Student name : "<<name<<endl;
                cout<<"Student roll: "<<roll<<endl;
                cout<<"Total parcentage : "<<total<<endl;
                cout<<"Grade : "<< grade<<endl;
                break;
                }
            }
            if(!found){
              cout<<"not found your id " <<id << "."<<endl;
            }
            inFile.close();
    }

};

void save(){ //using function for accessable grathers all functionalities for connect main function.
    FindGrade student;
    int a;
    cout <<endl;
    while(true){ // Infinite loop for chart.
    cout<<"1. see details\n2. calculate grade\n3.back\nEnter your choice: ";//Display chart options.
    cin>>a;
    switch (a)
{
    case 1:
        int id;
        cout <<"Enter id :";//cheacking id for show detalis.
        cin>>id;
        cout<<endl;
        student.loadFromFile(id);
        cout<<endl;
        break;

    case 2:
    cout<<"Now you calculate grade."<<endl; //calculate and save details in file.
    student.getDetails();
    student.calculateGrade();
    student.displayGrade();
        break;

   case 3:
        cout <<"Back."<<endl;// return display chart.
    return;

    default:
    cout<<"Invalid choice."; //when any document aren't save those id you use for input then showing invalid .
    }
    }
}

int main() {
   save();// save method have all methods and class those are include for accesablelity create
   // for main function thas i calling only save function.
   return 0;
}