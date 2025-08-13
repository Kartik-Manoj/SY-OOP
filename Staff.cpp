#include <iostream>
#include <string>
using namespace std;

// Base class
class staff {
protected:
    string name, dept;
public:
    void accept1() {
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the department: ";
        cin>>dept;
    }
    void display1() {
        cout<<"Name: "<<name<<endl;
        cout<<"Department: " <<dept<<endl;
    }
};

// Derived class for Teacher
class teacher : public staff {
private:
    string subject;
    int exp;
public:
    void accept2() {
        accept1();
        cout<<"Enter the subject: ";
        cin>>subject;
        cout<<"Experience (in years): ";
        cin>>exp;
    }
    void display2() {
        cout<<"---- Teacher Staff ----"<<endl;
        display1();
        cout<<"Subject: "<<subject<<endl;
        cout<<"Experience: "<<exp<< endl;
    }
};

// Derived class for Support Staff
class supportstaff : public staff {
private:
    string area;
public:
    void accept3() {
        accept1();
        cout<<"Enter the area of support: ";
        cin>>area;
    }
    void display3() {
        cout<<"---- Support Staff ----"<<endl;
        display1();
        cout<<"Area of Support: "<<area<<endl;
    }
};

int main() {
    int n1, n2;
    cout<<"Enter number of teachers: ";
    cin>>n1;
    teacher t[n1]; 
    for (int i=0; i<n1; i++) {
        cout<<"\nEnter details for Teacher "<<i+1<<":"<< endl;
        t[i].accept2();
    }

    cout<<"\nEnter number of support staff: ";
    cin>>n2;
     supportstaff s[n2];  
    for (int i=0; i<n2; i++) {
        cout<<"\nEnter details for Support Staff "<<i+1 <<":"<< endl;
        s[i].accept3();
    }

    int choice;
    do {
        cout<<"\n1. Teacher Staff\t2. Support Staff\t3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout<<"\n--- TEACHER DETAILS ---" << endl;
                for (int i = 0; i < n1; i++) {
                    cout<<"\nTeacher "<< i+1 << ":" <<endl;
                    t[i].display2();
                }
                break;

            case 2:
                cout<< "\n--- SUPPORT STAFF DETAILS ---" << endl;
                for (int i = 0; i < n2; i++) {
                    cout<<"\nSupport Staff " << i+1 << ":" << endl;
                    s[i].display3();
                }
                break;

            case 3:
                cout<<"Exiting program..."<<endl;
                break;
        }
    } while (choice!=3);

    return 0;
}

