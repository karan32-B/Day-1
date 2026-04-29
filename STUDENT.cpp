#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // For formatted output

using namespace std;

class Student {
private:
    string name;
    int roll_no;
    float marks;
    char grade;

public:
    // Function to input student details
    void inputDetails() {
        cout << "Enter Name: ";
        cin.ignore(); // To clear the buffer
        cin>>name;
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> roll_no;
        cout << "Enter Marks: ";
        cin >> marks;
        calculateGrade();
    }

    // Function to calculate grade
    void calculateGrade() {
        if (marks >= 85) grade = 'A';
        else if (marks >= 70) grade = 'B';
        else if (marks >= 50) grade = 'C';
        else grade = 'F'; // F for FAIL
    }

    // Function to display details
    void displayDetails() const {
        cout << left << setw(15) << name 
             << setw(10) << roll_no 
             << setw(10) << marks 
             << setw(10) << (grade == 'F' ? "FAIL" : string(1, grade)) << endl;
    }

    // Getter for marks to help with topper/average logic
    float getMarks() const {
        return marks;
    }

    // Getter for name
    string getName() const {
        return name;
    }
};

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    vector<Student> students(n);
    float totalMarks = 0;

    // Input loop
    for (int i = 0; i < n; i++) {
        cout << "\nDetails for Student " << i + 1 << ":" << endl;
        students[i].inputDetails();
        totalMarks += students[i].getMarks();
    }

    // Display Table Header
    cout << "\n" << string(45, '-') << endl;
    cout << left << setw(15) << "Name" 
         << setw(10) << "Roll No" 
         << setw(10) << "Marks" 
         << setw(10) << "Grade" << endl;
    cout << string(45, '-') << endl;

    // Display loop and find topper
    Student* topper = &students[0];
    for (int i = 0; i < n; i++) {
        students[i].displayDetails();
        if (students[i].getMarks() > topper->getMarks()) {
            topper = &students[i];
        }
    }

    // Bonus calculations
    cout << string(45, '-') << endl;
    cout << "Average Marks: " << fixed << setprecision(2) << (totalMarks / n) << endl;
    cout << "Class Topper: " << topper->getName() << " (" << topper->getMarks() << " marks)" << endl;

    return 0;
}