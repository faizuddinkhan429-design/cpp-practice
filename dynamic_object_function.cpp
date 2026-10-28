#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    void setValue(int v) {
        value = v;
    }

    void display() {
        cout << "Value = " << value << endl;
    }
};

int main() {
    // Create an object dynamically using the new operator
    Number* num = new Number;

    int input;
    cout << "Enter a number: ";
    cin >> input;

    num->setValue(input);
    num->display();

    // Release dynamically allocated memory
    delete num;
    num = nullptr;

    return 0;
}
