#include <iostream>
using namespace std;
int main(){
    int number = 7;

    cout<<"Initial: "<<number<<endl;

    cout<<"post increment: "<<number++<<endl;
    cout<<"after post increment: "<<number<<endl;
    cout<<"pre increment: "<<++number<<endl;
    cout<<"post decrement: "<<number--<<endl;
    cout<<"after post decrement: "<<number<<endl;
    cout<<"pre decrement: "<<--number<<endl;
    return 0;
}