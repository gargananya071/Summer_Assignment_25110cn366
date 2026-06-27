// Program to create Salary Management System

#include <iostream>
using namespace std;

// Structure for employee details
struct employee{
    int empID;
    string name;
    double basicSal;
    double hra;
    double da;
    double pf;
    double netSal;
};

int main()
{
    employee emp;       // Create an employee variable

    cout << "\n\t\t==================== SALARY MANAGEMENT SYSTEM ======================" << endl << endl;
    cout << "Enter employee ID : ";
    cin >> emp.empID;

    cout << "Enter employee name : ";
    cin.ignore();
    getline(cin , emp.name);

    cout << "Enter basic salary of employee : ";
    cin >> emp.basicSal;

    emp.hra = emp.basicSal * 0.2;
    emp.da = emp.basicSal * 0.1;
    emp.pf = emp.basicSal * 0.12;

    emp.netSal = emp.basicSal + emp.da + emp.hra - emp.pf;

    // Print Payslip
    cout << endl << "------------------- EMPLOYEE PAYSLIP ------------------" << endl;
    cout << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "ID : " << emp.empID << " | Name : " << emp.name << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "Basic Salary   : " << emp.basicSal << endl;
    cout << "HRA (20%)      : " << emp.hra << endl;
    cout << "DA (10%)       : " << emp.da << endl;
    cout << "PF (12%)       : " << emp.pf << endl;
    cout << "--------------------------------------------------------" << endl;
    cout << "NET SALARY     : " << emp.netSal << endl;
    cout << "--------------------------------------------------------" << endl;

    return 0;
}