#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    int id;
public:
    virtual void getDetails() = 0;
    virtual void calculateGrade() = 0;
    virtual void displayGrade() = 0;
    virtual ~Student() {}
};

class FindGrade : public Student {
private:
    float Q1, Q2, QT, midmarks, finalmarks;
    float percentage, percQ, percM, percF;
    string grade;

    void setMarks(float quiz1, float quiz2, float mid, float finalExam) {
        Q1 = quiz1;
        Q2 = quiz2;
        midmarks = mid;
        finalmarks = finalExam;
    }

public:
    void getDetails() override {
        cout << "Enter student name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter student ID: ";
        cin >> id;

        cout << "Enter marks of Quiz # 1 out of (10): ";
        cin >> Q1;
        if (Q1<0||Q1>10){
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

    
    void calculateGrade() override {
        QT = Q1 + Q2;
        percQ = (20.0 / 20.0) * QT;
        percM = (30.0 / 100.0) * midmarks;
        percF = (50.0 / 100.0) * finalmarks;
        percentage = percQ + percM + percF;

        if (percentage >= 90.0)
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

    void displayGrade() override {
        cout << "\nStudent Name: " << name;
        cout << "\nStudent ID: " << id;
        cout << "\nTotal Percentage: " << percentage << "%";
        cout << "\nGrade: " << grade << endl;


        ofstream outFile("student_grades.txt", ios::app);
        if (!outFile){
            cout <<"Error";
            return;
        }
        outFile<<name<<" "<<id<<" "<<percentage<<" "<<grade<<endl;

            outFile.close();
            cout << "Student details saved to file.\n";
            cout<<endl;

    }

     void loadFromFile(int id) {
        ifstream inFile("student_grades.txt");
        if (!inFile) {
            cerr << "Error opening file for reading.\n";
            return;
        }
            string name,grade;
            float total;
            long roll;
            bool found=false;

            while (inFile>>name>>roll>>total>>grade) {
                if (id==roll){
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

void save(){
    FindGrade student;
    int a;
    cout <<endl;
    while(true){
    cout<<"1. see details\n2. calculate grade\n3.back\nEnter your choice: ";
    cin>>a;
    switch (a)
{
    case 1:
        int id;
        cout <<"Enter id :";
        cin>>id;
        if (id == -1) {
                    cout << "Returning to the main menu." << endl;
                    break;
                }
        cout<<endl;
        student.loadFromFile(id);
        cout<<endl;
        break;

    case 2:
    cout<<"Now you calculate grade."<<endl;
    student.getDetails();
    student.calculateGrade();
    student.displayGrade();
        break;

   case 3:
        cout <<"Back."<<endl;
    return;

    default:
    cout<<"Invalid choice.";
    }
    }
}

int main() {
   save();
   return 0;
}