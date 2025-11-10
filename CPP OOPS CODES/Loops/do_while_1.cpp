#include <iostream>//to accept 10 nos in loop n display count of -ve,+ve & 0

using namespace std;

int main() {
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    int num;
    int count = 0;

    cout << "Please enter 10 numbers to count the positives, negatives, and zeros." << endl;

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> num;
        if (num > 0) {
            positive_count++;
        } else if (num < 0) {
            negative_count++;
        } else {
            zero_count++;
        }
        count++;
    } while (count < 10);

    cout << "Positive numbers: " << positive_count << endl;
    cout << "Negative numbers: " << negative_count << endl;
    cout << "Zeroes: " << zero_count << endl;

    return 0;
}
