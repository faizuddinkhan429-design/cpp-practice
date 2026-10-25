#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    int sum = 0;

    cout << "Enter " << SIZE << " numbers:" << endl;

    for (int i = 0; i < SIZE; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> numbers[i];
        sum += numbers[i];
    }

    cout << "\nArray elements: ";
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << " ";
    }

    cout << "\nSum of array elements = " << sum << endl;

    return 0;
}
