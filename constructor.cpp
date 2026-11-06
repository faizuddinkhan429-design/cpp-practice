#include<iostream>
using namespace std;

class student  {
    private:
    string name;
    int age;
    public:
    student (){
        name = "Md Asif";
        age = 19;
        cout<<"Default Constructor"<<endl;
    }
    student(string n , int a){
        name = n;
        age = a;
        cout<<"Parametrized Constructor"<<endl;
    }

    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
    int main(){
        student s1;
        s1. display();
        cout<<endl;
        student s2("shakil", 18);
        s2. display();

        return 0;
    }

