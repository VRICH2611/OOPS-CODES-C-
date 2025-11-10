// to accept a num from user:
//A) Palindrome

//B)Armstrong

//C) Prime Number
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    cout << "Enter a number to check if it is a Palindrome, Armstrong, and Prime number: ";
    cin >> num;

    // Palindrome Check
    int original_num_pal = num;
    int reversed_num = 0;
    int remainder;
    int temp_num = num;

    do {
        remainder = temp_num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        temp_num /= 10;
    } while (temp_num != 0);

    if (original_num_pal == reversed_num) {
        cout << num << " is a Palindrome number." << endl;
    } else {
        cout << num << " is not a Palindrome number." << endl;
    }

    // Armstrong Check
    int original_num_arm = num;
    int digit_count = 0;
    int temp_arm_num = num;
    do {
        temp_arm_num /= 10;
        digit_count++;
    } while (temp_arm_num != 0);

    int sum_arm = 0;
    temp_arm_num = num;
    do {
        remainder = temp_arm_num % 10;
        sum_arm += pow(remainder, digit_count);
        temp_arm_num /= 10;
    } while (temp_arm_num != 0);

    if (original_num_arm == sum_arm) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    // Prime Number Check
    bool is_prime = true;
    if (num <= 1) {
        is_prime = false;
    } else {
        int i = 2;
        do {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
            i++;
        } while (i <= num / 2);
    }

    if (is_prime) {
        cout << num << " is a Prime number." << endl;
    } else {
        cout << num << " is not a Prime number." << endl;
    }

    return 0;
}
