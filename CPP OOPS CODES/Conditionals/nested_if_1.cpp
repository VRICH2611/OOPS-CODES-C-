#include <iostream>//Program to accept a number from used and check if its 3 digit and find the sum of its digits
using namespace std;

int main() {
    int a;
    cout << "Enter an integer: ";
    cin >> a;

    if (a >= 100 && a <= 999) {
        cout << "The number is a 3-digit number." << endl;
        
        int f_d = a / 100;
        int s_d = (a / 10) % 10;
        int t_d = a % 10;
        int sum = f_d + s_d + t_d;
        
        cout << "Sum of its digits is: " << sum << endl;
        
    } else {
        cout << "The number is not a 3-digit number." << endl;
    }

    return 0;
}