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
    Student s1(41, "Tanvi Dhatrak", "Artificial Intelligence and Machine Learning");

    s1.displayDetails();

    return 0;
}
