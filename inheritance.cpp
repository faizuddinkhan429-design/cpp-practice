#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    void setName(const string& studentName) {
        name = studentName;
    }

    void displayName() const {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    void displayDetails() const {
        displayName();
        cout << "Roll Number: " << rollNumber << endl;
    }
};

int main() {
    Student student;

    student.setName("Aman");
    student.setRollNumber(101);

    cout << "Student Details" << endl;
    student.displayDetails();

    return 0;
}