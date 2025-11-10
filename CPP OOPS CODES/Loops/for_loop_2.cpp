#include <iostream>//to accept 10 nos and display table of all

using namespace std;

int main() {
    int num;
    cout << "Enter 10 numbers. The program will display the multiplication table for each." << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        cout << "Multiplication table for " << num << ":" << endl;
        for (int j = 1; j <= 10; ++j) {
            cout << num << " * " << j << " = " << num * j << endl;
        }
        cout << endl;
    }
    return 0;
}
