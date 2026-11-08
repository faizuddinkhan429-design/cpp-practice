#include <iostream>
using namespace std;

int main()
{
    char name[50];
    int units;
    float bill = 0;
    cout << "Enter user name: ";
    cin >> name;
    cout << "Enter number of units consumed: ";
    cin >> units;
if(units<=100){
        bill=1*units;
    }	
    else if(101<=300){
        bill=2*units;
    }
        else{
            bill=4*units;
        }
        if(bill<=500){
            bill=bill;
        }
        else if(501<=5000){
            bill=bill;
        }
        else{
            bill=(bill*15)/100+bill;
        }
    cout << "\nName: " << name;
    cout << "\nTotal bill : " << bill;
    

    return 0;
}