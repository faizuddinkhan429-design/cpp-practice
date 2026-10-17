#include<iostream>
using namespace std;

int main() {
    int num1, num2;
    float ans;
    
    cout<<"Enter first number: ";
    cin>> num1;
    cout<<"Enter second number: ";
    cin>> num2;
    
    try {
        if (num2 == 0) {
            throw "Error! Division by zero";
        }
        ans = (float)num1 / num2;
        cout<<"Ans = "<< ans << endl;
    }
    catch (const char *msg) {
        cout<< msg << endl;
    }
    
    return 0;
}