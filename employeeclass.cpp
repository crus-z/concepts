#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
   
    Employee(string empName, int empID, double baseSalary) 
        : name(empName), employeeID(empID), salary(baseSalary) {}

   
    void setName(const string &empName) {
        name = empName;
    }

    void setID(int empID) {
        employeeID = empID;
    }

    void setSalary(double baseSalary) {
        salary = baseSalary;
    }

    void calculateSalary(char performanceGrade) {
        double performanceMultiplier;
        
        switch (performanceGrade) {
            case 'A':
                performanceMultiplier = 1.2; 
                break;
            case 'B':
                performanceMultiplier = 1.1; 
                break;
            case 'C':
                performanceMultiplier = 1.0; 
                break;
            case 'D':
                performanceMultiplier = 0.9; 
                break;
            default:
                cout << "Invalid performance grade. No changes made to salary." << endl;
                return;
        }

        salary *= performanceMultiplier;
    }

    double getSalary() const {
        return salary;
    }

    void displayEmployeeInfo() const {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Current Salary: $" << salary << endl;
    }
};

int main() {
    string name;
    int id;
    double baseSalary;
    char performanceGrade;

    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter employee ID: ";
    cin >> id;

    cout << "Enter employee's base salary: ";
    cin >> baseSalary;

    Employee employee(name, id, baseSalary);

    cout << "Enter employee's performance grade (A, B, C, or D): ";
    cin >> performanceGrade;

    employee.calculateSalary(performanceGrade);

    cout << "\nUpdated Employee Information:" << endl;
    employee.displayEmployeeInfo();

    return 0;
}
