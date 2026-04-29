#include <iostream>
#include <vector>
#include <string>
// #include <iomanip> 

using namespace std;

class student
{
private:
    string name;
    int roll_no;
    float marks;
    char grade;
};

void student::inputDetails()
{
    cout << "Enter Your Good Name:";
    cin >> name;
    cout << "Enter your Roll No.:";
    cin >> roll_no;
    cout << "Enter Your Marks:";
    cin >> marks;
    calculateGrade();
}

void student::calculateGrade()
{
    if (marks >= 90)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks <= 89)
    {
        grade = 'B';
    }
    else if (marks >= 70 && marks <= 79)
    {
        grade = 'C';
    }
    else if (marks >= 60 && marks <= 69)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
        cout << "Sorry, You are Failed. Better Luck Next Time" << endl;
    }
}

void student::displayDetail()
{
    cout << left << setw(13) << name << setw(10) << roll_no << setw(10) << marks << setw(10) << (grade == 'F' ? "You are Failed. Better Luck Next Time" : string(1, grade)) << endl;
}

float getMarks() const{
    return marks;
}

string getName() const{
    return name;
}

int main(){
    int t;
    cout<<"Enter the number of students:";
    cin >>t;
    cout<<"Total number of students is"<<t;

    vector<student>students(t);

    for(int i=0; i<t; i++){
        cout<<i+1<<"Details of Student:"<<endl;
        students[i].inputDetails();
        totalMarks += students[i].getMarks();
    })
}

void displayAverageMarks(float totalMarks,  numberOfStudents){
    float averageMarks = totalMarks / numberOfStudents;
    cout<<"Average Marks of the class: "<<average

void findtoppers( int getMarks, string getName){
    int highestMarks = 0;
    for(int i=0;i<=t;i++){
        if(students[i].getMarks().getName()>getMarks){
            highestMarks = students[i].getMarks().getName();
            cout<<"Topper of the class is"<<students[i].getName()<< "with marks:"<<students[i].getMarks();
        })
    }
}

void totalMarks(){
    float totalMarks = 0;
    for(int i=0;i<=t;i++){
        totalMarks += getMarks();
    }
}



void averageMarks( totalMarks, numberOfstudents){
    float averageMarks = totalMarks/numberOfstudents;
    cout<<"Average Marks of the class:"<<averageMarks;
})
