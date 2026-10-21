#include <iostream>
using namespace std;
class Counter{
private:
    static int count; 
public:
    Counter(){
        count++;
        cout << "Object created. Current count: " << count << endl;
    }
    static void showCount(){
        cout << "Total number of objects created: " << count << endl;
    }
};
int Counter::count = 0;
int main(){
    Counter obj1;
    Counter obj2;
    Counter obj3;                                        
    Counter::showCount();

  return 0;
}