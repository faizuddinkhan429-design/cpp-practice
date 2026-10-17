#include<iostream>
using namespace std;

class Math {
    public:
    int sum(int a, int b){
        return a + b;
    }
    int sum(int a, int b, int c) {
        return a + b + c;
    }
};
    int main(){
        Math m;
        cout<<"sum of 2 number: "<<m.sum(4, 3) <<endl;
        cout<<"sum of 3 number: "<<m.sum(4, 3, 2)<<endl;
        return 0;
    }
