#include<iostream>
using namespace std;

int main() {
    try { 
        int choice;
        cout<<"Enter your choice (1: int exception, 2: double exception, 3: string exception): ";
        cin>>choice;
        
    if(choice == 1)
        throw 10;
    else if(choice == 2)
        throw 5.5;
    else if(choice == 3)
        throw"Exception occurred";
    else
        cout<<"No exception thrown"<<endl;
    }
    
    catch(int e){
        cout<<"Integer exception caught: "<<e<<endl;
    }
    catch(double e){
        cout<<"Double exception caught: "<<e<<endl;
    }
    catch(const char*e){
        cout<<"String exception caught: "<<e<<endl;
    }
    catch(...){
        cout<<"Unknown exception caught"<<endl;
    }
   
    return 0;
}