#include <iostream>//to accept 10 nos in loop n display first even no.

using namespace std;

int main() {
    int num;
    bool found_even = false;
    cout << "Enter 10 numbers. The program will display the first even one it finds." << endl;
    for (int i = 0; i < 10; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;
        if (num % 2 == 0 && !found_even) {
            cout << "The first even number is: " << num << endl;
            found_even = true;
        }
    }
    if (!found_even) {
        cout << "No even number was entered." << endl;
    }
    return 0;
}
