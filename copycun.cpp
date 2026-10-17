#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
public:
    Student(int r, string n) {
        roll = r;
        name = n;
    }
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor " << endl;
    }
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }
};
int main() {
    Student s1(242, "Faiz");
    Student s2 = s1;
    cout << "\nDetails of First Student:" << endl;
    s1.display();
    cout << "\nDetails of Second Student (Copied):" << endl;
    s2.display();
    return 0;
}