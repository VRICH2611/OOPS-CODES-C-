#include <iostream>// to accept 10 nos in loop & display minimum numbers

using namespace std;

int main() {
    int num;
    int min_num;
    int count = 0;

    cout << "Please enter 10 numbers to find the minimum." << endl;

    do {
        cout << "Enter number " << count + 1 << ": ";
        cin >> num;
        if (count == 0) {
            min_num = num;
        } else {
            if (num < min_num) {
                min_num = num;
            }
        }
        count++;
    } while (count < 10);

    cout << "The minimum number is: " << min_num << endl;

    return 0;
}
