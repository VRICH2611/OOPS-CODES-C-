#include <iostream>//to accept 10 nos to display all even nos

using namespace std;

int main() {
    int num;
    int count = 0;

    cout << "Please enter 10 numbers to display all the even numbers." << endl;

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> num;
        if (num % 2 == 0) {
            cout << num << " is an even number." << endl;
        }
        count++;
    } while (count < 10);

    return 0;
}
