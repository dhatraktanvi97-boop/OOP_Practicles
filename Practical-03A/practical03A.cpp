#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    string department;
    double salary;

public:
    // Setup function to populate data
    void setDetails(int empid, string empName, string empDept, double empsal) {
        employeeID = empid;
        name = empName;
        department = empDept;
        salary = empsal;
    }

    // Function to display employee info
    void displayInfo(bool authorized) const {
        if (authorized) {
            cout << "ID: " << employeeID << "\n"
                 << "Name: " << name << "\n"
                 << "Department: " << department << "\n"
                 << "Salary: $" << salary << "\n"
                 << "------------------\n";
        } else {
            cout << "Access Denied: You are not authorized to view this record\n";
        }
    }
};

int main() {
    const int MAX_EMPLOYEES = 2;
    Employee staffList[MAX_EMPLOYEES];

    // Temporary variables to hold user inputs
    int id;
    string name;
    string dept;
    double sal;

    cout << "=== Enter Employee Details ===\n";
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        cout << "\nRecording Employee #" << (i + 1) << "\n";
        
        cout << "Enter ID: ";
        cin >> id;
        
        
        cin.ignore(); 
        
        cout << "Enter Name: ";
        getline(cin, name); 
        
        cout << "Enter Department: ";
        getline(cin, dept);
        
        cout << "Enter Salary: ";
        cin >> sal;

        
        staffList[i].setDetails(id, name, dept, sal);
    }

    // Simulate HR authorization check
    bool isAuthorized = true;
    cout << "\n--- Employee Records (HR view) ---\n";
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        staffList[i].displayInfo(isAuthorized);
    }

    return 0;
}
