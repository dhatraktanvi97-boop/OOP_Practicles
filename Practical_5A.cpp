#include <iostream>
#include <string>
using namespace std;

class Student 
{
 private:
   int rollNumber;
   string name;
   string course;

public:
                // Constructor
    Student(int rollNumber, string name, string course) 
    {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }
 void displayDetails() 
    {
        cout << "Student Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }

};

int main() 
{
    int rollNo;
    string studName;
    string studCourse;

    // Taking inputs from the user
    cout << "Enter Roll Number: ";
    cin >> rollNo;
    
    // Clear the input buffer before reading strings with spaces
    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, studName);

    cout << "Enter Course: ";
    getline(cin, studCourse);

    cout << endl; // Adding a blank line for clean formatting

    // Creating object with user input values
    Student s1(rollNo, studName, studCourse);

    // Displaying details
    s1.displayDetails();

    return 0;
}
