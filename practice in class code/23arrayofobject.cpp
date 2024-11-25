
/*Write a program to print the roll number and average marks of 8 students in
 three subjects (each out of 100). The marks are entered by the user and the
  roll numbers are automatically assigned.*/
  #include<iostream>
  using namespace std;
  class student{
    public:
    float average;
    int m1,m2,m3;
    int roll;
    void inputmarks(int r)
    {
        roll=r;
        cout<<"Enter marks for Number "<<roll<<":"<<endl;
        cout<<"Enter marks for subject 1 :";
        cin>>m1;
        cout<<"Enter marks for subject 2 :";
        cin>>m2;
        cout<<"Enter marks for subject 3 :";
        cin>>m3;
        if(m1<0||m1>100||m2<0||m2>100||m3<0||m3>100)
        {
            cout<<"Invalid marks enterd.Please entered marks between 0 to 100."<<endl;
            inputmarks(r);
        }
    }
    void calculateAverage()
    {
        average=(m1+m2+m3)/3.0;
    }
    void display()
    {
        cout<<"Roll Number : "<<roll<<"\nAverage marks :"<<average<<endl;
    }
  };
  int main()
  {
    student students[8];
    for(int i=0;i<8;i++)
    {
        students[i].inputmarks(i+1);
        students[i].calculateAverage();
    }
    for(int i=0;i<8;i++)
    {
        students[i].display();
    }
    return 0;
  }
