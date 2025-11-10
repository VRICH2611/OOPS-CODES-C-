// program to accept a number from user and check if its 4 digits, check if sum of first and 
//second digit is greater than third and fourth digit and sum of all digits should be even and if its single digit or not
using namespace std;

#include <iostream>
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number >= 1000 && number <= 9999) {
        cout << "The number is a 4-digit number." << endl;

        int first_digit = number / 1000;
        int second_digit = (number / 100) % 10;
        int third_digit = (number / 10) % 10;
        int fourth_digit = number % 10;

        int sum_first_two = first_digit + second_digit;
        int sum_last_two = third_digit + fourth_digit;
        int sum_all = sum_first_two + sum_last_two;

        if (sum_first_two > sum_last_two) {
            cout << "Sum of first two digits is greater than sum of last two." << endl;
            if (sum_all % 2 == 0) {
                cout << "Sum of all digits is even." << endl;
            } else {
                cout << "Sum of all digits is odd." << endl;
            }
        } else {
            cout << "Sum of first two digits is NOT greater than sum of last two." << endl;
        }

    } else {
        if (number >= 0 && number <= 9) {
            cout << "The number is a single-digit number." << endl;
        } else if (number >= -9 && number <= -1) {
            cout << "The number is a single-digit number." << endl;
        } else {
            cout << "The number is not a 4-digit or single-digit number." << endl;
        }
    }

    return 0;
}