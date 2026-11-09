#include <iostream>
using namespace std;

class Student {
protected:
    int roll_no;

public:
    void getRoll(int r) {
        roll_no = r;
    }

    void displayRoll() {
        cout << "Roll Number: " << roll_no << endl;
    }
};

class Test : public Student {
protected:
    float sub1, sub2;

public:
    void getMarks(float m1, float m2) {
        sub1 = m1;
        sub2 = m2;
    }

    void displayMarks() {
        cout << "Subject 1 Marks: " << sub1 << endl;
        cout << "Subject 2 Marks: " << sub2 << endl;
    }
};
class Sports {
protected:
    float sports_mark;

public:
    void getSportsMark(float s) {
        sports_mark = s;
    }

    void displaySportsMark() {
        cout << "Sports Marks: " << sports_mark << endl;
    }
};

class Result : public Test, public Sports {
    float total;

public:
    void calculateResult() {
        total = sub1 + sub2 + sports_mark;
    }

    void displayResult() {
        displayRoll();
        displayMarks();
        displaySportsMark();
        cout << "Total Marks: " << total << endl;
    }
};

int main() {
    Result r;

    int roll;
    float m1, m2, sm;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Subject 1 Marks: ";
    cin >> m1;

    cout << "Enter Subject 2 Marks: ";
    cin >> m2;

    cout << "Enter Sports Marks: ";
    cin >> sm;

    r.getRoll(roll);
    r.getMarks(m1, m2);
    r.getSportsMark(sm);

    r.calculateResult();

    cout << "\n----- Final Result Card -----\n";
    r.displayResult();

    return 0;
}