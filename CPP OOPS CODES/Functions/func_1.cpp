#include <iostream>// to create a function which checks number is even or odd

using namespace std;

void checkEvenOrOdd(int number) {
    if (number % 2 == 0) {
        cout << number << " is an even number." << endl;
    } else {
        cout << number << " is an odd number." << endl;
    }
}

int main() {
    int num;
    cout << "Enter an integer to check if it's even or odd: ";
    cin >> num;
    checkEvenOrOdd(num);
    return 0;
}
