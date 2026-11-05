#include<iostream>
using namespace std;

class MathOps {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }
};

class Figure {
public:
    virtual void draw() {
        cout << "Drawing a generic figure" << endl;
    }
};

class Square : public Figure {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    cout << "Static Binding\n";
    MathOps obj;
    cout << "Sum of 2 + 16 = " << obj.add(2, 16) << endl;

    cout << "\nDynamic Binding\n";
    Figure* f;
    Square s;
    f = &s;
    f->draw();

    return 0;
}