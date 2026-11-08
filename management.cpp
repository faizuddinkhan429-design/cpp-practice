#include<iostream>
using namespace std;
class bank{
    string name,ACtype;
    int ACnum;
    float balance;
    int amount;
public:
void getdata(){
    cout<<"Enter name and account type:";
    cin>>name>>ACtype;
    cout<<"Enter the AC number and balance:";
    cin>>ACnum>>balance;
}
    void deposit(){
cout<<"Enter the balance to be deposite:";
cin>>amount;
balance = balance + amount;
cout<<"Now the balance is:"<<balance;
    }
    void withdraw(){
        cout<<"\n Enter the balance to be withdraw:";
        cin>>amount;
        balance = balance - amount;
    }
    void display(){
        cout<<"Now the balance is:"<<balance;
     }
};
int main(){
bank SBI;
SBI.getdata();
SBI.deposit();
SBI.withdraw();
SBI.display();

return 0;
}


