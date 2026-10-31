#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student() {
        name = "Faiz";
        age = 18;
        cout << "Default Constructor" << endl;
    }
    Student(string n, int a) {
        name = n;
        age = a;
        cout << "Parameterized Constructor " << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main() {
    Student s1;
    s1.display();

    cout << endl;
    Student s2("Ali", 20);
    s2.display();

    return 0;
}