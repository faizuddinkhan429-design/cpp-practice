#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[10][10];
    int sparse[50][3];
    int k = 0;

    cout << "Enter matrix elements:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cin >> matrix[i][j];

            if(matrix[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    cout << "Sparse Matrix Representation (Row Column Value):\n";
    for(int i = 0; i < k; i++) {
        cout << sparse[i][0] << " "
             << sparse[i][1] << " "
             << sparse[i][2] << endl;
    }

    return 0;
}