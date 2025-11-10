//create a function for:

//A) Fibonacci series

//B) Armstrong

//C) palindrome

//D) prime

//E) calc power

//F) factorial of number

//G) maximum number
#include <iostream>
#include <cmath>

using namespace std;

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }
    cout << endl;
}

bool isArmstrong(int n) {
    int originalNumber = n;
    int sum = 0;
    int count = 0;
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        count++;
    }
    temp = originalNumber;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }
    return sum == originalNumber;
}

bool isPalindrome(int n) {
    int originalNumber = n;
    int reversedNumber = 0;
    int remainder;
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n /= 10;
    }
    return originalNumber == reversedNumber;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long calculatePower(int base, int exp) {
    return pow(base, exp);
}

long long calculateFactorial(int n) {
    long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int choice;
    do {
        cout << "\nChoose an operation:" << endl;
        cout << "1) Fibonacci series" << endl;
        cout << "2) Check for Armstrong number" << endl;
        cout << "3) Check for palindrome" << endl;
        cout << "4) Check for prime number" << endl;
        cout << "5) Calculate power" << endl;
        cout << "6) Calculate factorial" << endl;
        cout << "7) Find maximum of two numbers" << endl;
        cout << "0) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int count;
                cout << "Enter the number of terms for the Fibonacci series: ";
                cin >> count;
                printFibonacci(count);
                break;
            }
            case 2: {
                int number;
                cout << "Enter a number to check if it's an Armstrong number: ";
                cin >> number;
                if (isArmstrong(number)) {
                    cout << number << " is an Armstrong number." << endl;
                } else {
                    cout << number << " is not an Armstrong number." << endl;
                }
                break;
            }
            case 3: {
                int number;
                cout << "Enter a number to check if it's a palindrome: ";
                cin >> number;
                if (isPalindrome(number)) {
                    cout << number << " is a palindrome number." << endl;
                } else {
                    cout << number << " is not a palindrome number." << endl;
                }
                break;
            }
            case 4: {
                int number;
                cout << "Enter a number to check if it's a prime number: ";
                cin >> number;
                if (isPrime(number)) {
                    cout << number << " is a prime number." << endl;
                } else {
                    cout << number << " is not a prime number." << endl;
                }
                break;
            }
            case 5: {
                int base, exp;
                cout << "Enter base number: ";
                cin >> base;
                cout << "Enter exponent: ";
                cin >> exp;
                cout << base << " to the power of " << exp << " is: " << calculatePower(base, exp) << endl;
                break;
            }
            case 6: {
                int number;
                cout << "Enter a positive integer to find its factorial: ";
                cin >> number;
                if (number < 0) {
                    cout << "Factorial is not defined for negative numbers." << endl;
                } else {
                    cout << "The factorial of " << number << " is: " << calculateFactorial(number) << endl;
                }
                break;
            }
            case 7: {
                int num1, num2;
                cout << "Enter the first number: ";
                cin >> num1;
                cout << "Enter the second number: ";
                cin >> num2;
                cout << "The maximum number is: " << findMaximum(num1, num2) << endl;
                break;
            }
            case 0:
                cout << "End" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
