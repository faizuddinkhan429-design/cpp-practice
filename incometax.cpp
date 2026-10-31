#include <iostream>
using namespace std;
class Business;  
class Salary {
private:
    float salaryIncome;
public:
    Salary(float s) {
        salaryIncome = s;
    }
    friend void calculateTax(Salary, Business);
};
class Business {
private:
    float businessIncome;
public:
    Business(float b) {
        businessIncome = b;
    }
    friend void calculateTax(Salary, Business);
};
void calculateTax(Salary s, Business b) {
    float totalIncome = s.salaryIncome + b.businessIncome;
    float tax;
    if (totalIncome <= 500000)
        tax = totalIncome * 0.05;
    else if (totalIncome <= 1000000)
        tax = totalIncome * 0.10;
    else
        tax = totalIncome * 0.20;
    cout << "Total Income: " << totalIncome << endl;
    cout << "Income Tax: " << tax << endl;
}
int main() {
    float salary, business;
    cout << "Enter your Salary Income: ";
    cin >> salary;
    cout << "Enter your Business Income: ";
    cin >> business;
    Salary s1(salary);
    Business b1(business);
    calculateTax(s1, b1);
    return 0;
}    
