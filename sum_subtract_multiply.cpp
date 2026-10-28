#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nSum = " << a + b << endl;
    cout << "Difference (a - b) = " << a - b << endl;
    cout << "Product = " << a * b << endl;

    if (b != 0) {
        cout << "Division (a / b) = " << a / b << endl;
    } else {
        cout << "Division (a / b) is undefined because the second number is zero." << endl;
    }

    return 0;
}
