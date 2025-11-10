#include <iostream>//to accept 10 nos and display factorial of each

using namespace std;

int main() {
    int num;
    cout << "Enter 10 numbers. The program will display the factorial of each." << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        long long factorial = 1;
        if (num < 0) {
            cout << "Factorial is not defined for negative numbers." << endl;
        } else {
            for (int j = 1; j <= num; ++j) {
                factorial *= j;
            }
            cout << "The factorial of " << num << " is: " << factorial << endl;
        }
    }
    return 0;
}
