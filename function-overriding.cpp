#include<iostream>
using namespace std;

class Base {
    public:
    virtual void show() {
        cout<<"Base class function"<<endl;
    }
};

class Drived : public Base {
    public:
    void show() {
        cout<<"Drived class funtion"<<endl;
    }
};
int main() {
    Base* b;
    Drived d;
    b = &d;
    b->show();
    return 0;
}