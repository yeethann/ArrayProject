#include <iostream>
using namespace std;

void fillArray(int** matrix, int rowCount, int colCount) {
    int value = 1;

    for (int col = 0; col < colCount; col++) {
        if (col % 2 == 0) {
            for (int row = 0; row < rowCount; row++) {
                matrix[row][col] = value++;
            }
        }
        else {
            for (int row = rowCount - 1; row >= 0; row--) {
                matrix[row][col] = value++;
            }
        }
    }
}

void displayArray(int** matrix, int rowCount, int colCount) {
    for (int i = 0; i < rowCount; i++) {
        for (int j = 0; j < colCount; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rowCount = 4, colCount = 4;

    int** matrix = new int* [rowCount];
    for (int i = 0; i < rowCount; ++i) {
        matrix[i] = new int[colCount];
    }

    fillArray(matrix, rowCount, colCount);

    displayArray(matrix, rowCount, colCount);

    for (int i = 0; i < rowCount; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
