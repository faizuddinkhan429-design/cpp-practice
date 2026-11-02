#include<iostream>
using namespace std;
struct myclass 
{
 string name ;
 int rollnum;
 float marks;
};

class  myclass1
{
    public:
    string name1;
    int rollno1;
    int marks1;
};
int main(){
myclass a;
myclass1 a1;
a.name = "Faiz";
 a.rollnum = 242;
 a.marks = 419.84;
 cout <<a.name <<"\n"<<a.rollnum<<"\n"<<a.marks ;

return 0;
}