//2) to create 2 matrices of 3x3 and:

//A) display sum of both matrix in third matrix

//B) interchange values of matrix

//C) matrix multiplication
#include <iostream>
#include <cmath>

using namespace std;

void sumAndDisplayMatrix() {
    int matrix[3][3];
    int total_sum = 0;
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matrix[i][j] << " ";
            total_sum += matrix[i][j];
        }
        cout << endl;
    }
    cout << "The sum of all elements is: " << total_sum << endl;
}

void countPosNeg() {
    int matrix[3][3];
    int positive_count = 0;
    int negative_count = 0;
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] > 0) {
                positive_count++;
            } else if (matrix[i][j] < 0) {
                negative_count++;
            }
        }
    }
    cout << "Count of positive numbers: " << positive_count << endl;
    cout << "Count of negative numbers: " << negative_count << endl;
}

void findMax() {
    int matrix[3][3];
    int max_num;
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    max_num = matrix[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (matrix[i][j] > max_num) {
                max_num = matrix[i][j];
            }
        }
    }
    cout << "The maximum number in the matrix is: " << max_num << endl;
}

void countPrimes() {
    int matrix[3][3];
    int prime_count = 0;
    cout << "Enter 9 numbers for the 3x3 matrix to check for prime numbers:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int num = matrix[i][j];
            bool is_prime = true;
            if (num <= 1) {
                is_prime = false;
            } else {
                for (int k = 2; k <= num / 2; ++k) {
                    if (num % k == 0) {
                        is_prime = false;
                        break;
                    }
                }
            }
            if (is_prime) {
                prime_count++;
            }
        }
    }
    cout << "The count of prime numbers is: " << prime_count << endl;
}

void countPalindromes() {
    int matrix[3][3];
    int palindrome_count = 0;
    cout << "Enter 9 numbers for the 3x3 matrix to check for palindromes:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int num = matrix[i][j];
            int original_num = num;
            int reversed_num = 0;
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                reversed_num = (reversed_num * 10) + digit;
                temp /= 10;
            }
            if (original_num == reversed_num) {
                palindrome_count++;
            }
        }
    }
    cout << "The count of palindrome numbers is: " << palindrome_count << endl;
}

void countArmstrongs() {
    int matrix[3][3];
    int armstrong_count = 0;
    cout << "Enter 9 numbers for the 3x3 matrix to check for Armstrong numbers:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int num = matrix[i][j];
            int original_num = num;
            int sum = 0;
            int digit_count = 0;
            int temp = num;
            while (temp != 0) {
                temp /= 10;
                digit_count++;
            }
            temp = num;
            while (temp != 0) {
                int digit = temp % 10;
                sum += pow(digit, digit_count);
                temp /= 10;
            }
            if (sum == original_num) {
                armstrong_count++;
            }
        }
    }
    cout << "The count of Armstrong numbers is: " << armstrong_count << endl;
}

void sumRows() {
    int matrix[3][3];
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "The sum of each row is:" << endl;
    for (int i = 0; i < 3; ++i) {
        int row_sum = 0;
        for (int j = 0; j < 3; ++j) {
            row_sum += matrix[i][j];
        }
        cout << "Row " << i + 1 << ": " << row_sum << endl;
    }
}

void sumDiagonals() {
    int matrix[3][3];
    int main_diagonal_sum = 0;
    int anti_diagonal_sum = 0;
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        main_diagonal_sum += matrix[i][i];
        anti_diagonal_sum += matrix[i][2 - i];
    }
    cout << "Sum of the main diagonal: " << main_diagonal_sum << endl;
    cout << "Sum of the anti-diagonal: " << anti_diagonal_sum << endl;
}

void transposeMatrix() {
    int original_matrix[3][3];
    int transposed_matrix[3][3];
    cout << "Enter 9 numbers for the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> original_matrix[i][j];
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            transposed_matrix[j][i] = original_matrix[i][j];
        }
    }
    cout << "The transposed matrix is:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << transposed_matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\nChoose a matrix operation:" << endl;
        cout << "1) Add, display & sum" << endl;
        cout << "2) Count positive & negative" << endl;
        cout << "3) Display maximum number" << endl;
        cout << "4) Count prime numbers" << endl;
        cout << "5) Count palindrome numbers" << endl;
        cout << "6) Count Armstrong numbers" << endl;
        cout << "7) Sum of each row" << endl;
        cout << "8) Sum of all diagonals" << endl;
        cout << "9) Transpose matrix" << endl;
        cout << "0) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sumAndDisplayMatrix();
                break;
            case 2:
                countPosNeg();
                break;
            case 3:
                findMax();
                break;
            case 4:
                countPrimes();
                break;
            case 5:
                countPalindromes();
                break;
            case 6:
                countArmstrongs();
                break;
            case 7:
                sumRows();
                break;
            case 8:
                sumDiagonals();
                break;
            case 9:
                transposeMatrix();
                break;
            case 0:
                cout << "Exit!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
