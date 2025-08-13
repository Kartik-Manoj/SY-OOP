NAME: Kartik Manoj  
PRN: B24CE1087

#include<iostream>
#include<string>
using namespace std;

class employee {
private:
    string name;
    int emp_id;
    string department;
    string date;
    int contact;
    static int emp_count;  //STATIC FUNCTION

public:
    employee() {           //DEFAULT CONSTRUCTOR
        cout << "DEFAULT CONSTRUCTOR" << endl;  
        name = "Kartik";
        emp_id = 1087;
        department = "CE";
        date = "10/09/2024";
        contact = 93456789;
        emp_count++;
    }

    employee(string a, string b, string c, int d, int e) {  // PARAMERTERIZED CONSTRUCTOR
        cout<<"PARAMETERIZED CONSTRUCTOR"<<endl;
        name = a;
        department = b;
        date = c;
        emp_id = d;
        contact = e;
        cout << "Employee object created for " << name << endl;
        emp_count++;
    }

    employee(const employee& other) {    //COPY CONSTRUCTOR
        cout<<"COPY CONSTRUCTOR"<<endl;
        name = other.name;
        emp_id = other.emp_id;
        department = other.department;
        date = other.date;
        contact = other.contact;
        cout << "Employee object created by copying " << name << endl;
        emp_count++;
    }

    ~employee() {     //DESTRUCTOR
        cout << "Destructed Employee: " << name << endl;
    }

    void display();
    static void display_emp_count();
};

int employee::emp_count = 0;

inline void employee::display() {      //INLINE FUNCTION
    cout << "--- EMPLOYEE INFORMATION ---\n";
    cout << "Name           : " << name << "\n";
    cout << "Employee ID    : " << emp_id << "\n";
    cout << "Department     : " << department << "\n";
    cout << "Working from   : " << date << "\n";
    cout << "Phone number   : " << contact << "\n";
   
}

void employee::display_emp_count() {
    cout << "Total number of employees created: " << emp_count << endl;
}

int main() {
    string name, department, date;
    int emp_id, contact;

    cout << "WELCOME\n";
    cout << "Creating a default employee object:" << endl;
    employee default_obj;
    default_obj.display();
    employee::display_emp_count();

    cout << "\n--- Enter details for a new employee ---\n";
    cout << "Enter your name: ";
    cin>>name;
    cout << "Employee ID: ";
    cin >> emp_id;
    cout << "Department: ";
    cin>>department;
    cout << "Date of joining: ";
    cin>>date;
    cout << "Phone: ";
    cin >> contact;

    cout << "\nDetails:\n";
    employee new_employee(name, department, date, emp_id, contact);
    new_employee.display();
    employee::display_emp_count();

    employee copied_employee = new_employee;
    cout << "\nCopied Employee Details:\n";
    copied_employee.display();
    employee::display_emp_count();

    //Using new and delete
    cout << "\n--- Creating a dynamic employee using 'new' ---\n";
    employee* ptr= new employee("Dynamic Emp", "IT", "12/09/2024", 1064, 92844556);
    ptr->display();
    employee::display_emp_count();

    cout << "\n--- Deleting the dynamically created employee using 'delete' ---\n";
    delete dynamic_employee;

    cout << "\nDestructors for remaining objects will be called automatically at the end of main()\n";
    return 0;
}



