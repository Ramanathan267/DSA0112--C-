#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string Emp_name, Address, Mail_id;
    int Emp_id;
    long long Mobile_no;
    float Basic_Pay;

    void getEmployeeDetails() {
        cout << "Enter Name of the Employee: ";
        cin >> Emp_name;
        cout << "Enter Address of the Employee: ";
        cin.ignore();
        getline(cin, Address);
        cout << "Enter ID of the Employee: ";
        cin >> Emp_id;
        cout << "Enter Mobile Number: ";
        cin >> Mobile_no;
        cout << "Enter E-Mail ID of the Employee: ";
        cin >> Mail_id;
        cout << "Enter Basic Pay: ";
        cin >> Basic_Pay;
    }
    
    void generatePaySlip() {
        float DA = 0.97 * Basic_Pay;
        float HRA = 0.10 * Basic_Pay;
        float PF = 0.12 * Basic_Pay;
        float Club_Fund = 0.001 * Basic_Pay;
        float Gross_Pay = Basic_Pay + DA + HRA;
        float Net_Pay = Gross_Pay - (PF + Club_Fund);
        cout << "\n=======================\n";
        cout << "PAYMENT SLIP\n";
        cout << "=======================\n";
        cout << "BASIC PAY => " << Basic_Pay << endl;
        cout << "DEARNESS ALLOWANCE => " << DA << endl;
        cout << "HOUSE RENT ALLOWANCE => " << HRA << endl;
        cout << "PROVIDENT FUND => " << PF << endl;
        cout << "CLUB FUND => " << Club_Fund << endl;
        cout << "GROSS PAY => " << Gross_Pay << endl;
        cout << "NET PAY => " << Net_Pay << endl;
    }
};

int main() {
    Employee e;
    e.getEmployeeDetails();
    e.generatePaySlip();
    return 0;
}

