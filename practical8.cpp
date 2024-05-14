#include <iostream>
#include <vector>
using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int>> data;

public:
    // Constructor
    Matrix(int rows, int cols) : rows(rows), cols(cols), data(vector<vector<int>>(rows, vector<int>(cols, 0))) {}

    // Function to get number of rows
    int getRows() const {
        return rows;
    }

    // Function to get number of columns
    int getCols() const {
        return cols;
    }

    // Function to input matrix
    void inputMatrix() {
        cout << "Enter matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cin >> data[i][j];
            }
        }
    }

    // Function to display matrix
    void displayMatrix() const {
        cout << "Matrix:" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Function to add two matrices
    Matrix add(const Matrix& other) const {
        if (rows != other.rows || cols != other.cols) {
            throw invalid_argument("Matrices are not compatible for addition.");
        }

        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Function to multiply two matrices
    Matrix multiply(const Matrix& other) const {
        if (cols != other.rows) {
            throw invalid_argument("Matrices are not compatible for multiplication.");
        }

        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < other.cols; j++) {
                for (int k = 0; k < cols; k++) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // Function to find transpose of a matrix
    Matrix transpose() const {
        Matrix result(cols, rows);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.data[j][i] = data[i][j];
            }
        }
        return result;
    }
};

int main() {
    int rows, cols;
    char choice;

    cout << "Enter number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    Matrix matrix1(rows, cols), matrix2(rows, cols), result(rows, cols);

    cout << "Enter elements of first matrix:" << endl;
    matrix1.inputMatrix();

    cout << "Enter elements of second matrix:" << endl;
    matrix2.inputMatrix();

    do {
        cout << "\nMenu:";
        cout << "\na. Sum of matrices";
        cout << "\nb. Product of matrices";
        cout << "\nc. Transpose of matrix";
        cout << "\nd. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        try {
            switch (choice) {
                case 'a':
                    result = matrix1.add(matrix2);
                    cout << "Sum of matrices is:" << endl;
                    result.displayMatrix();
                    break;
                case 'b':
                    result = matrix1.multiply(matrix2);
                    cout << "Product of matrices is:" << endl;
                    result.displayMatrix();
                    break;
                case 'c':
                    result = matrix1.transpose();
                    cout << "Transpose of the matrix is:" << endl;
                    result.displayMatrix();
                    break;
                case 'd':
                    cout << "Exiting...";
                    break;
                default:
                    cout << "Invalid choice!" << endl;
            }
        } catch (const invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
        }
    } while (choice != 'd');

    return 0;
}
